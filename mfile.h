#ifndef __MAKERPM_MFILE_H
#define __MAKERPM_MFILE_H

#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


struct mfile {

    void* addr;
    int fd;
    size_t size;

    mfile(const std::string& f) {

        fd = ::open(f.c_str(), O_RDONLY|O_LARGEFILE);
        
        if (fd < 0) {
            throw std::runtime_error("Could not open: " + f);
        }

        struct stat st;

        if (::fstat(fd, &st) < 0) {
            throw std::runtime_error("Could not stat: " + f);
        }

        size = st.st_size;

        addr = ::mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
    }

    ~mfile() {
        if (fd >= 0 && addr != NULL) {
            ::close(fd);
            ::munmap(addr, size);
        }
    }

    mfile(mfile&& other) {

        addr = other.addr;
        fd = other.fd;
        size = other.size;

        other.addr = NULL;
        other.fd = -1;
    }
};

#endif
