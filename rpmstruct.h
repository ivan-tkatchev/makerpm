#ifndef __MAKERPM_RPMSTRUCT_H
#define __MAKERPM_RPMSTRUCT_H

namespace rpm {

struct lead_t {

    unsigned char magic[4];
    unsigned char major;
    unsigned char minor;
    uint16_t type;
    uint16_t archnum;
    char name[66];
    uint16_t osnum;
    uint16_t signature_type;       /* Signature header type (RPMSIG_HEADERSIG) */
    char reserved[16];                   /* Pad to 96 bytes -- 8 byte aligned! */

    static const size_t SIZE = 96;

    lead_t(const std::string& _name = "") {

        magic[0] = 0xed;
        magic[1] = 0xab;
        magic[2] = 0xee;
        magic[3] = 0xdb;
        major = 3;
        minor = 0;
        type = 0;
        archnum = 256;          // A big-endian 1.
        osnum = 256;            // A big-endian 1.
        signature_type = 1280;  // A big-endian 5. 

        ::strncpy(name, _name.c_str(), 65);
        name[65] = '\0';
    }
};


struct index_t {

    unsigned char magic[8];
    uint32_t nentries;
    uint32_t size;

    static const size_t SIZE = 16;

    struct entry_t {
        enum {
            TYPE_NULL         = 0,
            TYPE_CHAR         = 1,
            TYPE_INT8         = 2,
            TYPE_INT16        = 3,
            TYPE_INT32        = 4,
            TYPE_INT64        = 5,
            TYPE_STRING       = 6,
            TYPE_BIN          = 7,
            TYPE_STRING_ARRAY = 8,
            TYPE_I18STRING    = 9
        };

        uint32_t tag;
        uint32_t type;
        uint32_t offset;
        uint32_t count;

        static const size_t SIZE = 16;
    };

    std::vector<entry_t> entries;

    size_t store_off;
    size_t data_off;

    index_t() {

        magic[0] = 0x8e;
        magic[1] = 0xad;
        magic[2] = 0xe8;
        magic[3] = 0x01;
        magic[4] = 0x00;
        magic[5] = 0x00;
        magic[6] = 0x00;
        magic[7] = 0x00;

        nentries = 0;
        size = 0;

        store_off = 0;
        data_off = 0;
    }
};

}

#endif
