
#include <sys/mman.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <endian.h>
#include <string.h>
#include <stdint.h>

#include <stdexcept>

#include <iostream>

#include <vector>
#include <map>

#include <openssl/sha.h>

#include "rpmtags.h"
#include "rpmstruct.h"



std::string make_lead(const std::string& name) {
    rpm::lead_t lead(name);

    return std::string((char*)(&lead), rpm::lead_t::SIZE);
}

struct rpmprops_t {

    std::string locale;
    std::string name;
    std::string version;
    std::string release;
    std::string summary;
    std::string description;
    uint32_t buildtime;
    std::string buildhost;
    std::string license;
    std::string packager;
    std::string group;
    std::string url;
    std::string os;
    std::string arch;
    std::string payload_format;
    std::string payload_compressor;
    std::string payload_flags; //x
    std::string platform;
    std::string optflags; //x

    std::string rpmversion; //x

    struct script_t {
        std::string prog;
        std::string code;

        script_t() : prog("/bin/sh") {}
    };

    script_t prein;
    script_t postin;
    script_t preun;
    script_t postun;

    // prein, preinprog

    struct deps_t {

        enum {
            DEPFLAG_ANY        = 0,
            DEPFLAG_LESS       = (1 << 1),
            DEPFLAG_GREATER    = (1 << 2),
            DEPFLAG_EQUAL      = (1 << 3),
            DEPFLAG_POSTTRANS  = (1 << 5),
            DEPFLAG_PREREQ     = (1 << 6),
            DEPFLAG_PRETRANS   = (1 << 7),
            DEPFLAG_INTERP     = (1 << 8),
            DEPFLAG_SCRIPT_PRE = (1 << 9),
            DEPFLAG_SCRIPT_POST = (1 << 10),
            DEPFLAG_SCRIPT_PREUN = (1 << 11),
            DEPFLAG_SCRIPT_POSTUN = (1 << 12),
            DEPFLAG_SCRIPT_VERIFY = (1 << 13),
            DEPFLAG_FIND_REQUIRES = (1 << 14),
            DEPFLAG_FIND_PROVIDES = (1 << 15),
            DEPFLAG_TRIGGERIN  = (1 << 16),
            DEPFLAG_TRIGGERUN  = (1 << 17),
            DEPFLAG_TRIGGERPOSTUN = (1 << 18),
            DEPFLAG_MISSINGOK  = (1 << 19),
            DEPFLAG_RPMLIB = (1 << 24),
            DEPFLAG_TRIGGERPREIN = (1 << 25),
            DEPFLAG_KEYRING    = (1 << 26),
            DEPFLAG_CONFIG     = (1 << 28)
        };

        std::string name;
        uint32_t flags;
        std::string version;

        deps_t() : flags(0) {}
    };

    std::vector<deps_t> provide;
    std::vector<deps_t> require;

    // providename, provideflags, provideversion

    struct file_t {

        enum {
            FILEFLAG_NONE        = 0,
            FILEFLAG_CONFIG      = (1 <<  0),
            FILEFLAG_DOC         = (1 <<  1),
            FILEFLAG_ICON        = (1 <<  2),
            FILEFLAG_MISSINGOK   = (1 <<  3),
            FILEFLAG_NOREPLACE   = (1 <<  4),
            FILEFLAG_SPECFILE    = (1 <<  5),
            FILEFLAG_GHOST       = (1 <<  6),
            FILEFLAG_LICENSE     = (1 <<  7),
            FILEFLAG_README      = (1 <<  8),
            FILEFLAG_EXCLUDE     = (1 <<  9),
            FILEFLAG_UNPATCHED   = (1 << 10),
            FILEFLAG_PUBKEY      = (1 << 11) 
        };

        enum {
            VERIFYFLAG_NONE      = 0,       
            VERIFYFLAG_MD5       = (1 << 0),
            VERIFYFLAG_FILEDIGEST= (1 << 0),
            VERIFYFLAG_FILESIZE  = (1 << 1),
            VERIFYFLAG_LINKTO    = (1 << 2),
            VERIFYFLAG_USER      = (1 << 3),
            VERIFYFLAG_GROUP     = (1 << 4),
            VERIFYFLAG_MTIME     = (1 << 5),
            VERIFYFLAG_MODE      = (1 << 6),
            VERIFYFLAG_RDEV      = (1 << 7),
            VERIFYFLAG_CAPS      = (1 << 8),
            VERIFYFLAG_CONTEXTS  = (1 << 15)
        };

        uint32_t size;
        uint64_t longsize;
        uint16_t mode;
        uint16_t rdev;
        uint32_t mtime;
        std::string digest;
        std::string linkto;
        uint32_t flags; //!
        std::string username;
        std::string groupname;
        uint32_t verifyflags; //!
        uint32_t device;
        uint32_t inode;

        std::string fname;

        file_t() : size(0), longsize(0), mode(0), rdev(0), mtime(0), flags(0), verifyflags(0xFFFFFFFF), 
                   device(0), inode(0)
            {}
    };

    std::vector<file_t> files;

    // filesizes
    // filemodes
    // filerdevs
    // filemtimes
    // filedigests
    // filelinktos
    // fileflags ??
    // fileusername
    // filegroupname
    // fileverifyflags ??
    // filedevices
    // fileinodes
    // filelangs
    // dirindexes
    // basenames
    // dirnames
    // filecolors
    // fileclass
    // classdict
    // filedependsx
    // filedependsn
    // filecontexts


    rpmprops_t() :
        locale("C"), buildtime(::time(NULL)),  
        os("linux"), payload_format("cpio"), payload_compressor("gzip"), rpmversion("4.10")
        {}
};


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

    std::vector<std::string> locales;
    locales.push_back(props.locale);

    add_to_store(rpm::TAG_HEADERI18NTABLE, locales, index, store, nentries);
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
            dir += fname.substr(0, slash);
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

std::string make_index1(const std::string& index2, const std::string& payload) {

    std::string index;
    std::string store;

    // Add signature fields.

    size_t nentries = 0;

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

    add_to_store(rpm::TAG_SHA1HEADER, sha1, false, index, store, nentries);

    uint32_t size = index2.size() + payload.size();

    add_to_store(rpm::TAG_SIZE, size, index, store, nentries);

    std::vector<unsigned char> md5{108, 88, 58, 23, 218, 1, 159, 167, 252, 104, 184, 20, 200, 87, 174, 45};

    add_magic(rpm::TAG_MD5, md5, index, store, nentries);

    size_t uncompressedsize = 12345678;

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

    return iheader + index + store;
}


std::string make_rpm(const rpmprops_t& props, const std::string& payload) {

    std::string index2 = make_index2(props);
    std::string index1 = make_index1(index2, payload);
    std::string lead = make_lead(props.name);

    return lead + index1 + index2 + payload;
}

int main(int argc, char** argv) {

    try {

        if (argc != 2) {
            std::cout << "Usage: " << argv[0] << " <rpmfile>" << std::endl;
            return 1;
        }

        rpmprops_t props;

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

        std::string data = make_rpm(props, "Hello world!");

        std::string f = argv[1];

        int fd = ::open(f.c_str(), O_WRONLY|O_CREAT|O_LARGEFILE, 0666);
        
        if (fd < 0) {
            throw std::runtime_error("Could not open: " + f);
        }

        if (::write(fd, data.c_str(), data.size()) != data.size()) {
            throw std::runtime_error("Could not write to : " + f);
        }

        ::close(fd);

    } catch (std::exception& e) {
        std::cout << "ERROR: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
