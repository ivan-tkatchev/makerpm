
#include <unistd.h>
#include <arpa/inet.h>
#include <endian.h>
#include <string.h>
#include <stdint.h>

#include <stdexcept>

#include <iostream>

#include <vector>

#include "mfile.h"
#include "rpmtags.h"
#include "rpmstruct.h"


void read_lead(mfile& f, rpm::lead_t& lead) {

    ::memcpy(&lead, (char*)f.addr+0, rpm::lead_t::SIZE);
}

size_t read_index(mfile& f, rpm::index_t& index, bool first, size_t off) {

    ::memcpy(&index, (char*)f.addr+off, rpm::index_t::SIZE);

    index.nentries = ntohl(index.nentries);
    index.size = ntohl(index.size);

    index.entries.resize(index.nentries);

    size_t eoff = off + rpm::index_t::SIZE;

    for (uint32_t i = 0; i < index.nentries; ++i) {
        
        rpm::index_t::entry_t& entry = index.entries[i];

        ::memcpy(&entry, (char*)f.addr+eoff, rpm::index_t::entry_t::SIZE);

        entry.tag = ntohl(entry.tag);
        entry.type = ntohl(entry.type);
        entry.offset = ntohl(entry.offset);
        entry.count = ntohl(entry.count);

        eoff += rpm::index_t::entry_t::SIZE;
    }

    index.store_off = eoff;
    index.data_off = eoff + index.size;

    if (first && index.data_off % 8 != 0) {
        index.data_off += (index.data_off % 8);
    }

    return index.data_off;
}

void print_lead(rpm::lead_t& lead) {

    std::cout << "-- Lead --" << std::endl;
    std::cout << " Magic: " << (int)lead.magic[0] << " " << (int)lead.magic[1]
              << " " << (int)lead.magic[2] << " " << (int)lead.magic[3] << std::endl;

    std::cout << " Version: " << (int)lead.major << " " << (int)lead.minor << std::endl;
    std::cout << " Type: " << lead.type << std::endl;
    std::cout << " Arch: " << lead.archnum << std::endl;
    std::cout << " Name: " << lead.name << std::endl;
    std::cout << " OS: " << lead.osnum << std::endl;
    std::cout << " Sigtype: " << lead.signature_type << std::endl;
    std::cout << std::endl;
}

void print_index_entry_data(mfile& f, size_t off, uint32_t type, uint32_t count) {
    
    for (uint32_t __i = 0; __i < count; ++__i) {

        switch (type) {

        case rpm::index_t::entry_t::TYPE_CHAR: {
            char c = *((char*)f.addr+off);
            std::cout << " [" << c << "]";
            ++off;
            break;
        }

        case rpm::index_t::entry_t::TYPE_INT8: {
            unsigned char c = *((char*)f.addr+off);
            std::cout << " " <<(int)c;
            ++off;
            break;
        }

        case rpm::index_t::entry_t::TYPE_INT16: {
            uint16_t c;
            ::memcpy(&c, (char*)f.addr+off, 2);
            std::cout << " " << ntohs(c);
            off += 2;
            break;
        }

        case rpm::index_t::entry_t::TYPE_INT32: {
            uint32_t c;
            ::memcpy(&c, (char*)f.addr+off, 4);
            std::cout << " " << ntohl(c);
            off += 4;
            break;
        }

        case rpm::index_t::entry_t::TYPE_INT64: {
            uint64_t c;
            ::memcpy(&c, (char*)f.addr+off, 8);
            std::cout << " " << be64toh(c);
            off += 8;
            break;
        }

        case rpm::index_t::entry_t::TYPE_STRING_ARRAY:
        case rpm::index_t::entry_t::TYPE_I18STRING:
        case rpm::index_t::entry_t::TYPE_STRING: {
            std::string tmp;

            char* c = (char*)f.addr+off;

            while (*c != '\0') {
                tmp += *c;
                ++c;
            } 

            std::cout << " '" << tmp << "'";
            off += tmp.size() + 1;
            break;
        }

        case rpm::index_t::entry_t::TYPE_BIN: {
            unsigned char c = *((char*)f.addr+off);
            std::cout << " " << (int)c;
            ++off;
            break;
        }

        default:
            throw std::runtime_error("Sanity error: unknown data type.");
        }
    }
}

void print_index_entry(mfile& f, size_t off, rpm::index_t::entry_t& entry) {

    std::cout << " Tag: " << entry.tag << " (" << rpm::tag_printable(entry.tag) << ")" << std::endl;
    std::cout << " Type: ";
    switch (entry.type) {
    case rpm::index_t::entry_t::TYPE_CHAR:         std::cout << "NULL"; break;
    case rpm::index_t::entry_t::TYPE_INT8:         std::cout << "INT8"; break;
    case rpm::index_t::entry_t::TYPE_INT16:        std::cout << "INT16"; break;
    case rpm::index_t::entry_t::TYPE_INT32:        std::cout << "INT32"; break;
    case rpm::index_t::entry_t::TYPE_INT64:        std::cout << "INT64"; break;
    case rpm::index_t::entry_t::TYPE_STRING:       std::cout << "STRING"; break;
    case rpm::index_t::entry_t::TYPE_BIN:          std::cout << "BIN"; break;
    case rpm::index_t::entry_t::TYPE_STRING_ARRAY: std::cout << "STRING_ARRAY"; break;
    case rpm::index_t::entry_t::TYPE_I18STRING:    std::cout << "I18STRING"; break;
    default:                                       std::cout << "SANITY ERROR: " << entry.type; break;
    }
    std::cout << std::endl;
    std::cout << " Offset: " << entry.offset << std::endl;
    std::cout << " Count: " << entry.count << std::endl;

    std::cout << " {" << std::endl;
    print_index_entry_data(f, off + entry.offset, entry.type, entry.count);
    std::cout << std::endl;
    std::cout << " }" << std::endl << std::endl;
}

void print_index(mfile& f, size_t off, rpm::index_t& index) {
    std::cout << "-- Index --" << std::endl;
    std::cout << " Magic: " << (int)index.magic[0] << " " << (int)index.magic[1] << " " << (int)index.magic[2]
              << " " << (int)index.magic[3] << " " << (int)index.magic[4] << " " << (int)index.magic[5]
              << " " << (int)index.magic[6] << " " << (int)index.magic[7] << std::endl;
    std::cout << " Num entries: " << index.nentries << std::endl;
    std::cout << " Data size: " << index.size << std::endl;
    std::cout << std::endl;

    for (rpm::index_t::entry_t& v : index.entries) {
        print_index_entry(f, off, v);
    }
}

void print_rpm(const std::string& fn) {

    mfile f(fn);
    rpm::lead_t lead;
    rpm::index_t index1;
    rpm::index_t index2;

    read_lead(f, lead);

    size_t ixoff = rpm::lead_t::SIZE;
    ixoff = read_index(f, index1, true,  ixoff);
    ixoff = read_index(f, index2, false, ixoff);

    print_lead(lead);
    print_index(f, index1.store_off, index1);
    print_index(f, index2.store_off, index2);
    std::cout << ixoff << std::endl;
}

int main(int argc, char** argv) {

    try {

        if (argc != 2) {
            std::cout << "Usage: " << argv[0] << " <rpmfile>" << std::endl;
            return 1;
        }

        print_rpm(argv[1]);

    } catch (std::exception& e) {
        std::cout << "ERROR: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
