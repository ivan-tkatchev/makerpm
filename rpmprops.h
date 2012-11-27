#ifndef __MAKERPM_RPMPROPS_H
#define __MAKERPM_RPMPROPS_H

struct rpmprops_t {

    //std::vector<std::string> locale;
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
    std::string optflags;

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
    std::vector<deps_t> conflict;
    std::vector<deps_t> obsolete;

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

        file_t() : size(0), longsize(0), mode(0), rdev(0), mtime(0), 
                   digest("00000000000000000000000000000000"),
                   flags(0), verifyflags(0xFFFFFFFF), device(0), inode(0)
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
        buildtime(::time(NULL)), os("linux"), payload_format("cpio"), payload_compressor("gzip"), rpmversion("4.10")
        {}
};

#endif
