

/*

Lead: only name is to be filled in, the rest is as default.

------------------

Index1:

num entries is 5,
data size is 84, (offset is 280).

#1:

 Tag: 62 (HEADERSIGNATURES)
 Type: BIN
 Offset: 68
 Count: 16
 {
 0 0 0 62 0 0 0 7 255 255 255 176 0 0 0 16
 }

Data is fixed.

#2:

 Tag: 269 (SHA1HEADER)
 Type: STRING
 Offset: 0
 Count: 1
 {
 '127ef5233e745319186cc67be844862caa00cd5b'
 }

Sha1 of Index2 data.

#3:

 Tag: 1000 (SIZE or NAME)
 Type: INT32
 Offset: 44
 Count: 1
 {
 13370426
 }

Size is size of file - 280. (280 is offset, 96 + 5*16 + 84 + 4 (padding))

#4:

 Tag: 1004 (MD5 or SUMMARY)
 Type: BIN
 Offset: 48
 Count: 16
 {
 108 88 58 23 218 1 159 167 252 104 184 20 200 87 174 45
 }

MD5 of Index2 data + compressed payload.

#5:

 Tag: 1007 (PAYLOADSIZE or BUILDHOST)
 Type: INT32
 Offset: 64
 Count: 1
 {
 62575784
 }

Size of _unzipped_ cpio file.

----------------

Index2:

#1:

 Tag: 63 (HEADERIMMUTABLE)
 Type: BIN
 Offset: 2247
 Count: 16
 {
 0 0 0 63 0 0 0 7 255 255 252 16 0 0 0 16
 }

Data is fixed.

#2

 Tag: 100 (HEADERI18NTABLE)
 Type: STRING_ARRAY
 Offset: 0
 Count: 1
 {
 'C'
 }

Locale.

#3

 Tag: 1000 (SIZE or NAME)
 Type: STRING
 Offset: 2
 Count: 1
 {
 'begun-syslog_rd'
 }

Package name.

**** NEVRA -- name, epoch, version, release, architecture

#4

 Tag: 1001 (VERSION)
 Type: STRING
 Offset: 18
 Count: 1
 {
 '20840'
 }

Package version.

#5

 Tag: 1002 (RELEASE)
 Type: STRING
 Offset: 24
 Count: 1
 {
 'production'
 }

Package release.

#6

 Tag: 1004 (MD5 or SUMMARY)
 Type: I18STRING
 Offset: 35
 Count: 1
 {
 'syslog_rd service'
 }

Package summary.

#7

 Tag: 1005 (DESCRIPTION)
 Type: I18STRING
 Offset: 53
 Count: 1
 {
 'This package contains syslog_rd service'
 }

Package description.

#8

 Tag: 1006 (BUILDTIME)
 Type: INT32
 Offset: 96
 Count: 1
 {
 1330591719
 }

Package buildtime.

#9 

 Tag: 1007 (PAYLOADSIZE or BUILDHOST)
 Type: STRING
 Offset: 100
 Count: 1
 {
 'rdev.hq.begun.ru'
 }

Package build host.

#10

 Tag: 1009 (SIZE)
 Type: INT32
 Offset: 120
 Count: 1
 {
 20518022
 }

Size on disk?

#11

 Tag: 1014 (LICENSE)
 Type: STRING
 Offset: 124
 Count: 1
 {
 'Begun proprietary'
 }

#12

 Tag: 1015 (PACKAGER)
 Type: STRING
 Offset: 142
 Count: 1
 {
 'Andrew Petelin <apetelin@begun.ru>'
 }

#13

 Tag: 1016 (GROUP)
 Type: I18STRING
 Offset: 177
 Count: 1
 {
 'Begun'
 }

#14

 Tag: 1020 (URL)
 Type: STRING
 Offset: 183
 Count: 1
 {
 'http://www.begun.ru'
 }

#15

 Tag: 1021 (OS)
 Type: STRING
 Offset: 203
 Count: 1
 {
 'linux'
 }

#16

 Tag: 1022 (ARCH)
 Type: STRING
 Offset: 209
 Count: 1
 {
 'x86_64'
 }


##

 Tag: 1124 (PAYLOADFORMAT)
 Type: STRING
 Offset: 1704
 Count: 1
 {
 'cpio'
 }

##

 Tag: 1125 (PAYLOADCOMPRESSOR)
 Type: STRING
 Offset: 1709
 Count: 1
 {
 'gzip'
 }


 Tag: 1132 (PLATFORM)
 Type: STRING
 Offset: 1723
 Count: 1
 {
 'x86_64-redhat-linux'
 }

*/




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
    std::string platform;

    rpmprops_t() :
        locale("C"), buildtime(::time(NULL)), os("linux"), payload_format("cpio"), payload_compressor("gzip")
        {}
};

void add_uint32(uint32_t v, std::string& s) {
    v = htonl(v);
    s += std::string((char*)(&v), 4);
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

    add_uint32(tag, index);
    add_uint32(rpm::index_t::entry_t::TYPE_BIN, index);
    add_uint32(store.size(), index);
    add_uint32(data.size(), index);

    for (unsigned char c : data) {
        store += c;
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

std::string make_index2(const rpmprops_t& props) {

    std::string index;
    std::string store;

    // Add package fields.

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
    add_to_store(rpm::TAG_LICENSE, props.license, false, index, store, nentries);
    add_to_store(rpm::TAG_PACKAGER, props.packager, false, index, store, nentries);
    add_to_store(rpm::TAG_GROUP, props.group, true, index, store, nentries);

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

        int fd = ::open(f.c_str(), O_WRONLY|O_CREAT|O_LARGEFILE);
        
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
