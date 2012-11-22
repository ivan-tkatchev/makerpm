
#include <sys/types.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <endian.h>
#include <string.h>
#include <stdint.h>
#include <pwd.h>
#include <grp.h>

#include <stdexcept>
#include <iostream>
#include <vector>
#include <map>

#include <openssl/sha.h>
#include <openssl/md5.h>
#include <archive.h>
#include <archive_entry.h>
#include <zlib.h>

#include "mfile.h"
#include "rpmtags.h"
#include "rpmstruct.h"
#include "rpmprops.h"

#include "propsparser.h"


std::string make_lead(const std::string& name) {
    rpm::lead_t lead(name);

    return std::string((char*)(&lead), rpm::lead_t::SIZE);
}


/*** ***/

void add_uint16(uint16_t v, std::string& s) {
    v = htonl(v);
    s += std::string((char*)(&v), 2);
}


void add_uint32(uint32_t v, std::string& s) {
    v = htonl(v);
    s += std::string((char*)(&v), 4);
}

void add_uint64(uint32_t v, std::string& s) {
    v = be64toh(v);
    s += std::string((char*)(&v), 8);
}

void add_to_store(uint32_t tag, const std::string& txt, bool i18, 
                  std::string& index, std::string& store, size_t& nentries) {

    add_uint32(tag, index);
    add_uint32((i18 ? rpm::index_t::entry_t::TYPE_I18STRING : rpm::index_t::entry_t::TYPE_STRING), index);
    add_uint32(store.size(), index);
    add_uint32(1, index);
    store += txt;
    store += '\0';

    ++nentries;
}

void add_to_store(uint32_t tag, const std::vector<std::string>& txt, 
                  std::string& index, std::string& store, size_t& nentries) {

    if (txt.empty())
        return;

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_STRING_ARRAY, index);
    add_uint32(store.size(), index);
    add_uint32(txt.size(), index);

    for (const std::string& t : txt) {
        store += t;
        store += '\0';
    }
    
    ++nentries;
}

void add_magic(uint32_t tag, const std::string& data,
               std::string& index, std::string& store, size_t& nentries) {

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_BIN, index);
    add_uint32(store.size(), index);
    add_uint32(data.size(), index);

    store += data;
    
    ++nentries;
}

void add_magic(uint32_t tag, const std::vector<unsigned char>& data,
               std::string& index, std::string& store, size_t& nentries) {

    if (data.empty())
        return;

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_BIN, index);
    add_uint32(store.size(), index);
    add_uint32(data.size(), index);

    for (unsigned char c : data) {
        store += c;
    }
    
    ++nentries;
}

void add_to_store(uint32_t tag, uint16_t data, std::string& index, std::string& store, size_t& nentries) {

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_INT16, index);

    if (store.size() & 1) {
        store += '\0';
    }

    add_uint32(store.size(), index);
    add_uint32(1, index);
    add_uint16(data, store);

    ++nentries;
}

void add_to_store(uint32_t tag, const std::vector<uint16_t>& data, 
                  std::string& index, std::string& store, size_t& nentries) {

    if (data.empty())
        return;

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_INT16, index);

    if (store.size() & 1) {
        store += '\0';
    }

    add_uint32(store.size(), index);
    add_uint32(data.size(), index);

    for (uint16_t v : data) {
        add_uint16(v, store);
    }

    ++nentries;
}

void add_to_store(uint32_t tag, uint32_t data, std::string& index, std::string& store, size_t& nentries) {

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_INT32, index);

    size_t n = (4 - (store.size() % 4)) % 4;

    while (n > 0) {
        store += '\0';
        --n;
    }

    add_uint32(store.size(), index);
    add_uint32(1, index);
    add_uint32(data, store);

    ++nentries;
}

void add_to_store(uint32_t tag, const std::vector<uint32_t>& data, 
                  std::string& index, std::string& store, size_t& nentries) {

    if (data.empty())
        return;

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_INT32, index);

    size_t n = (4 - (store.size() % 4)) % 4;

    while (n > 0) {
        store += '\0';
        --n;
    }

    add_uint32(store.size(), index);
    add_uint32(data.size(), index);

    for (uint32_t v : data) {
        add_uint32(v, store);
    }

    ++nentries;
}

void add_to_store(uint32_t tag, uint64_t data, std::string& index, std::string& store, size_t& nentries) {

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_INT64, index);

    size_t n = (8 - (store.size() % 8)) % 8;

    while (n > 0) {
        store += '\0';
        --n;
    }

    add_uint32(store.size(), index);
    add_uint32(1, index);
    add_uint64(data, store);

    ++nentries;
}

void add_to_store(uint32_t tag, const std::vector<uint64_t>& data, 
                  std::string& index, std::string& store, size_t& nentries) {

    if (data.empty())
        return;

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_INT64, index);

    size_t n = (8 - (store.size() % 8)) % 8;

    while (n > 0) {
        store += '\0';
        --n;
    }

    add_uint32(store.size(), index);
    add_uint32(data.size(), index);

    for (uint64_t v : data) {
        add_uint64(v, store);
    }

    ++nentries;
}


std::string make_index2(const rpmprops_t& props) {

    std::string index;
    std::string store;

    // Add package fields.

    uint32_t totsize = 0;
    uint64_t totlongsize = 0;

    size_t nentries = 0;

    add_to_store(rpm::TAG_HEADERI18NTABLE, props.locale, index, store, nentries);
    add_to_store(rpm::TAG_NAME, props.name, false, index, store, nentries);
    add_to_store(rpm::TAG_VERSION, props.version, false, index, store, nentries);
    add_to_store(rpm::TAG_RELEASE, props.release, false, index, store, nentries);

    add_to_store(rpm::TAG_SUMMARY, props.summary, true, index, store, nentries);
    add_to_store(rpm::TAG_DESCRIPTION, props.description, true, index, store, nentries);
    add_to_store(rpm::TAG_BUILDHOST, props.buildhost, false, index, store, nentries);
    add_to_store(rpm::TAG_BUILDTIME, props.buildtime, index, store, nentries);
    add_to_store(rpm::TAG_LICENSE, props.license, false, index, store, nentries);
    add_to_store(rpm::TAG_PACKAGER, props.packager, false, index, store, nentries);
    add_to_store(rpm::TAG_GROUP, props.group, true, index, store, nentries);
    add_to_store(rpm::TAG_URL, props.url, false, index, store, nentries);
    add_to_store(rpm::TAG_OS, props.os, false, index, store, nentries);
    add_to_store(rpm::TAG_ARCH, props.arch, false, index, store, nentries);
    add_to_store(rpm::TAG_PAYLOADFORMAT, props.payload_format, false, index, store, nentries);
    add_to_store(rpm::TAG_PAYLOADCOMPRESSOR, props.payload_compressor, false, index, store, nentries);
    add_to_store(rpm::TAG_PLATFORM, props.platform, false, index, store, nentries);

    add_to_store(rpm::TAG_OPTFLAGS, props.optflags, false, index, store, nentries);
    add_to_store(rpm::TAG_RPMVERSION, props.rpmversion, false, index, store, nentries);

    add_to_store(rpm::TAG_PREIN, props.prein.code, false, index, store, nentries);
    add_to_store(rpm::TAG_PREINPROG, props.prein.prog, false, index, store, nentries);
    add_to_store(rpm::TAG_POSTIN, props.postin.code, false, index, store, nentries);
    add_to_store(rpm::TAG_POSTINPROG, props.postin.prog, false, index, store, nentries);
    add_to_store(rpm::TAG_PREUN, props.preun.code, false, index, store, nentries);
    add_to_store(rpm::TAG_PREUNPROG, props.preun.prog, false, index, store, nentries);
    add_to_store(rpm::TAG_POSTUN, props.postun.code, false, index, store, nentries);
    add_to_store(rpm::TAG_POSTUNPROG, props.postun.prog, false, index, store, nentries);

    std::vector<std::string> providename;
    std::vector<uint32_t> provideflags;
    std::vector<std::string> provideversion;

    for (const auto& v : props.provide) {
        providename.push_back(v.name);
        provideflags.push_back(v.flags);
        provideversion.push_back(v.version);
    }

    add_to_store(rpm::TAG_PROVIDENAME, providename, index, store, nentries);
    add_to_store(rpm::TAG_PROVIDEVERSION, provideversion, index, store, nentries);
    add_to_store(rpm::TAG_PROVIDEFLAGS, provideflags, index, store, nentries);

    std::vector<std::string> requirename;
    std::vector<uint32_t> requireflags;
    std::vector<std::string> requireversion;

    for (const auto& v : props.require) {
        requirename.push_back(v.name);
        requireflags.push_back(v.flags);
        requireversion.push_back(v.version);
    }

    add_to_store(rpm::TAG_REQUIRENAME, requirename, index, store, nentries);
    add_to_store(rpm::TAG_REQUIREVERSION, requireversion, index, store, nentries);
    add_to_store(rpm::TAG_REQUIREFLAGS, requireflags, index, store, nentries);

    bool files_longsize = false;
    bool has_digest = false;

    for (const auto& f : props.files) {

        if (f.longsize > 0) {
            files_longsize = true;
        }

        if (f.digest.size() > 0) {
            has_digest = true;
        }
    }

    std::vector<uint32_t> size;
    std::vector<uint64_t> longsize;
    std::vector<uint16_t> mode;
    std::vector<uint16_t> rdev;
    std::vector<uint32_t> mtime;
    std::vector<std::string> digest;
    std::vector<std::string> linkto;
    std::vector<uint32_t> flags;
    std::vector<std::string> user;
    std::vector<std::string> group;
    std::vector<uint32_t> verifyflags;
    std::vector<uint32_t> device;
    std::vector<uint32_t> inode;

    std::vector<std::string> basename;
    std::vector<uint32_t> dirindex;

    std::map<std::string, uint32_t> dirindex_map;

    std::vector<std::string> dirname;

    for (const auto& f : props.files) {

        if (files_longsize) {
            longsize.push_back(f.longsize);
            totlongsize += f.longsize;

        } else {
            size.push_back(f.size);
            totsize += f.size;
        }

        mode.push_back(f.mode);
        rdev.push_back(f.rdev);
        mtime.push_back(f.mtime);
        
        if (has_digest) {
            digest.push_back(f.digest);
        }

        linkto.push_back(f.linkto);
        flags.push_back(f.flags);
        user.push_back(f.username);
        group.push_back(f.groupname);
        verifyflags.push_back(f.verifyflags);
        device.push_back(f.device);
        inode.push_back(f.inode);

        const std::string& fname = f.fname;
        size_t slash = fname.find_last_of('/');

        std::string base = fname;
        std::string dir = "/";

        if (slash != std::string::npos) {
            base = fname.substr(slash+1);
            dir += fname.substr(0, slash+1);
        }

        auto dim = dirindex_map.find(dir);

        if (dim == dirindex_map.end()) {
            dim = dirindex_map.insert(dirindex_map.end(), std::make_pair(dir, dirindex_map.size()));
            dirname.push_back(dir);
        }

        basename.push_back(base);
        dirindex.push_back(dim->second);
    }

    add_to_store(rpm::TAG_BASENAMES, basename, index, store, nentries);
    add_to_store(rpm::TAG_DIRINDEXES, dirindex, index, store, nentries);
    add_to_store(rpm::TAG_DIRNAMES, dirname, index, store, nentries);
    add_to_store(rpm::TAG_LONGFILESIZES, longsize, index, store, nentries);
    add_to_store(rpm::TAG_FILESIZES, size, index, store, nentries);
    add_to_store(rpm::TAG_FILEMODES, mode, index, store, nentries);
    add_to_store(rpm::TAG_FILERDEVS, rdev, index, store, nentries);
    add_to_store(rpm::TAG_FILEMTIMES, mtime, index, store, nentries);
    add_to_store(rpm::TAG_FILEDIGESTS, digest, index, store, nentries);
    add_to_store(rpm::TAG_FILELINKTOS, linkto, index, store, nentries);
    add_to_store(rpm::TAG_FILEFLAGS, flags, index, store, nentries);
    add_to_store(rpm::TAG_FILEUSERNAME, user, index, store, nentries);
    add_to_store(rpm::TAG_FILEGROUPNAME, group, index, store, nentries);
    add_to_store(rpm::TAG_FILEVERIFYFLAGS, verifyflags, index, store, nentries);
    add_to_store(rpm::TAG_FILEDEVICES, device, index, store, nentries);
    add_to_store(rpm::TAG_FILEINODES, inode, index, store, nentries);

    if (totlongsize > 0) {
        add_to_store(rpm::TAG_LONGSIZE, totlongsize, index, store, nentries);
    } else {
        add_to_store(rpm::TAG_SIZE, totsize, index, store, nentries);
    }


    // Add a pointless 'magic' field, which goes into the end of the store but as the first index entry.

    std::string magic;
    std::string magic_payload;

    int32_t magic_offset = -((nentries + 1) * rpm::index_t::entry_t::SIZE);

    add_uint32(rpm::TAG_HEADERIMMUTABLE, magic_payload);
    add_uint32(rpm::index_t::entry_t::TYPE_BIN, magic_payload);
    add_uint32((uint32_t)magic_offset, magic_payload);
    add_uint32(rpm::index_t::entry_t::SIZE, magic_payload);

    add_magic(rpm::TAG_HEADERIMMUTABLE, magic_payload, magic, store, nentries);

    index = magic + index;

    // Add header with the number of fields.

    std::string iheader;
    iheader += '\x8e';
    iheader += '\xad';
    iheader += '\xe8';
    iheader += '\x01';
    add_uint32(0, iheader);
    add_uint32(nentries, iheader);
    add_uint32(store.size(), iheader);

    return iheader + index + store;
}


void compress_file(mfile& in, const std::string& out) {

    gzFile gf = ::gzopen(out.c_str(), "wbx");

    if (gf == NULL) {
        throw std::runtime_error("Could not open for writing: " + out);
    }

    size_t n = ::gzwrite(gf, in.addr, in.size);

    if (n == 0) {
        throw std::runtime_error("Could not write to compressed file: " + out);
    }

    if (::gzclose(gf) != Z_OK) {
        throw std::runtime_error("Error in closing compressed file.");
    }
}


mfile make_index1(const std::string& index2, mfile& payload, const std::string& compressed_payload, std::string& header) {

    std::string index;
    std::string store;

    // Add signature fields.

    size_t nentries = 0;

    ////

    unsigned char sha1_raw[20];
    std::string sha1;

    ::SHA1((const unsigned char*)index2.data(), index2.size(), sha1_raw);

    for (size_t i = 0; i < 20; ++i) {
        static unsigned char print[16] = {'0', '1', '2', '3', '4', '5', '6', '7', 
                                          '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

        unsigned char c = sha1_raw[i];
        sha1 += print[(c >> 4) & 0xF];
        sha1 += print[c & 0xF];
    }

    size_t uncompressedsize = payload.size;

    ////

    compress_file(payload, compressed_payload);

    mfile ret(compressed_payload);

    ////

    std::vector<unsigned char> md5;
    md5.resize(16);

    MD5_CTX md5_c;

    if (!::MD5_Init(&md5_c))
        throw std::runtime_error("MD5_Init() failed");

    if (!::MD5_Update(&md5_c, (const unsigned char*)index2.data(), index2.size()))
        throw std::runtime_error("MD5_Update() failed");

    if (!::MD5_Update(&md5_c, (const unsigned char*)ret.addr, ret.size))
        throw std::runtime_error("MD5_Update() failed");

    if (!::MD5_Final(&(md5[0]), &md5_c))
        throw std::runtime_error("MD5_Final() failed");

    ////

    add_to_store(rpm::TAG_SHA1HEADER, sha1, false, index, store, nentries);

    uint32_t size = index2.size() + ret.size;

    add_to_store(rpm::TAG_SIZE, size, index, store, nentries);

    add_magic(rpm::TAG_MD5, md5, index, store, nentries);

    add_to_store(rpm::TAG_PAYLOADSIZE, uncompressedsize, index, store, nentries);

    // Add a pointless 'magic' field, which goes into the end of the store but as the first index entry.

    std::string magic;
    std::string magic_payload;

    int32_t magic_offset = -((nentries + 1) * rpm::index_t::entry_t::SIZE);

    add_uint32(rpm::TAG_HEADERSIGNATURES, magic_payload);
    add_uint32(rpm::index_t::entry_t::TYPE_BIN, magic_payload);
    add_uint32((uint32_t)magic_offset, magic_payload);
    add_uint32(rpm::index_t::entry_t::SIZE, magic_payload);

    add_magic(rpm::TAG_HEADERSIGNATURES, magic_payload, magic, store, nentries);

    index = magic + index;

    // Add header with the number of fields.

    std::string iheader;
    iheader += '\x8e';
    iheader += '\xad';
    iheader += '\xe8';
    iheader += '\x01';
    add_uint32(0, iheader);
    add_uint32(nentries, iheader);
    add_uint32(store.size(), iheader);

    // Align the data to 8 bytes.

    size_t n = iheader.size() + index.size() + store.size();
    size_t q = (8 - (n % 8)) % 8;

    while (q > 0) {
        store += '\0';
        --q;
    }

    header = iheader + index + store;
    return ret;
}


mfile make_rpm(const rpmprops_t& props, const std::string& payload_file, std::string& header) {

    mfile payload(payload_file);

    std::string index2 = make_index2(props);
    mfile ret = make_index1(index2, payload, payload_file + ".gz", header);
    std::string lead = make_lead(props.name);

    header = lead + header + index2;
    return ret;
}


std::string uid_to_uname(uid_t uid) {

    struct passwd unam;
    char buf[1024];

    struct passwd* res;
    ::getpwuid_r(uid, &unam, buf, 1024, &res);

    std::string uname;

    if (res == NULL) {
        return "(unknown)";
    } else {
        return res->pw_name;
    }
}

std::string gid_to_gname(gid_t gid) {

    struct group gnam;
    char buf[1024];

    struct group* res;
    ::getgrgid_r(gid, &gnam, buf, 1024, &res);

    if (res == NULL) {
        return "(unknown)";
    } else {
        return res->gr_name;
    }
}


void archive_to_rpmprops(const std::string& arfname, rpmprops_t& props) {

    struct archive* a;
    struct archive_entry* entry;

    a = ::archive_read_new();
    if (a == NULL) {
        throw std::runtime_error("Could not allocate archive struct.");
    }

    ::archive_read_support_filter_all(a);
    ::archive_read_support_format_all(a);

    if (::archive_read_open_filename(a, arfname.c_str(), 16*1024)) {

        throw std::runtime_error("Could not open: " + arfname + ::archive_error_string(a));
    }

    bool first = true;

    while (1) {
        int r;

        r = ::archive_read_next_header(a, &entry);

        if (first) {
            int f = ::archive_format(a);

            if (f & ARCHIVE_FORMAT_CPIO) {
                props.payload_format = "cpio";

            } else if (f & ARCHIVE_FORMAT_TAR) {
                props.payload_format = "tar";

            } else {
                throw std::runtime_error("Unsupported format: " + std::string(::archive_format_name(a)) + 
                                         ", only cpio and tar are currently supported.");
            }

            f = ::archive_filter_code(a, 0);

            if (f != ARCHIVE_FILTER_NONE) {
                throw std::runtime_error("Please provide an uncompressed archive as input.");
            }
        }

        if (r == ARCHIVE_EOF)
            break;

        if (r != ARCHIVE_OK) {
            throw std::runtime_error("Could not read archive entry: " + std::string(::archive_error_string(a)));
        }

        props.files.push_back(rpmprops_t::file_t());

        rpmprops_t::file_t& f = props.files.back();

        uint64_t size = ::archive_entry_size(entry);

        if (size < 0xFFFFFFFF) {
            f.size = size;
        } else {
            f.longsize = size;
        }

        f.mode = ::archive_entry_mode(entry);
        f.rdev = ::archive_entry_rdev(entry);
        f.mtime = ::archive_entry_mtime(entry);

        const char* linkto = ::archive_entry_symlink(entry);
        if (linkto != NULL) {
            f.linkto = linkto;
        }

        f.device = ::archive_entry_dev(entry);
        f.inode = ::archive_entry_ino(entry);

        f.username = uid_to_uname(::archive_entry_uid(entry));
        f.groupname = gid_to_gname(::archive_entry_gid(entry));

        f.fname = ::archive_entry_pathname(entry);

        // f.digest ??
        // f.flags ??
        // f.verifyflags ??
    }

    if (::archive_read_close(a)) {
        throw std::runtime_error("Could not close archive: " + std::string(::archive_error_string(a)));
    }

    ::archive_read_free(a);
}


int main(int argc, char** argv) {

    try {

        if (argc != 4) {
            std::cout << "Usage: " << argv[0] 
                      << " <rpm props config> <input archive file> <output rpm file>" << std::endl;
            return 1;
        }

        std::string propsfile = argv[1];
        std::string input = argv[2];
        std::string output = argv[3];

        rpmprops_t props;

        /*
        props.name = "mytestrpm";
        props.version = "666";
        props.release = "alpha";
        props.summary = "A test of RPM creation.";
        props.description = "A description of makerpm test package.";
        props.buildhost = "localhost";
        props.license = "BSD";
        props.packager = "hacker";
        props.group = "Testing";
        props.url = "http://www.ya.ru";
        props.arch = "x86_64";
        props.platform = "x86_64-redhat-linux";
        */

        propsparser::parse_props(propsfile, props);

        archive_to_rpmprops(input, props);

        std::string header;
        mfile payload = make_rpm(props, input, header);

        int fd = ::open(output.c_str(), O_WRONLY|O_CREAT|O_LARGEFILE, 0666);
        
        if (fd < 0) {
            throw std::runtime_error("Could not open: " + output);
        }

        if (::write(fd, header.c_str(), header.size()) != header.size()) {
            throw std::runtime_error("Could not write to : " + output);
        }

        if (::write(fd, payload.addr, payload.size) != payload.size) {
            throw std::runtime_error("Could not write to : " + output);
        }

        ::close(fd);

        ::unlink((input + ".gz").c_str());

    } catch (std::exception& e) {
        std::cout << "ERROR: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
