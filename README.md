makerpm
=======

### What is it?

A clean, simple RPM packager reimplemented completely from scratch.

It converts a directory on disk into an installable binary `RPM` package.

### Why?

`RPM` is a hoary beast with several problems:

  * `rpmbuild` is a very complex and poorly documented program; learning to use it properly is time-consuming and expensive.
  * `rpmbuild` imposes a certain development and build process, which might clash with your own in-house build process.
  * `rpmbuild` is not stand-alone; it only comes as a part of the complete `RPM` package manager system.
  * Installing and using `rpmbuild` on an OS that doesn't use `RPM` for package management is crufty and complicated.
  * There is _no_ independent implementation of the `RPM` package format, and coming to grips with the `rpm` source code is a monumental, impossible task.

Use cases for `makerpm`:

  * For when you are compiling something on a system that doesn't use `RPM` but want to distribute the result in a convient `RPM` format.
  * For the case when your build/continuous integration system doesn't work well with `rpmbuild`, but you still want the results as `RPM` packages.
  * For quickly converting a package in some other format to an `RPM` package.
  * For when you want to put together an `RPM` package without learning the intricacies of the whole `rpmbuild` process.
  * For learning how the `RPM` format works.

### Compiling

Download the source and compile. (A simple `Makefile` is provided.)

Prerequisites:

  * A C++11 compiler. (`gcc` 4.6 or 4.7 should work fine.)
  * `libarchive`
  * `libcrypto` (from the OpenSSL libraries)
  * `zlib`

(These libraries will be part of any modern Linux distribution. You probably don't even need to install anything to compile `makerpm`.)

### Usage

    makerpm <rpm properties file> <output RPM file> <path prefix> <list of files to package...>

where

`rpm properties file` is a file listing `RPM` metadata properties. (See `test.rpmprops` for an example.)

`output RPM file` is a filename for writing the resulting `RPM` package.

`path prefix` is the prefix to strip from the paths of input files before packaging.

`list of files` is the list of files on the local filesystem for packaging.

Alternatively, if file list is way too huge, you can use `-i <files listing file>` instead of explicit files list.

### Example

Assume you have a directory tree that looks like this:

    /home/user/package/usr/bin/myapp
    /home/user/package/usr/bin/myapp.o
    /home/user/package/usr/lib/libmyapp.so
    /home/user/package/usr/local/share/docs/myapp-help.html

Running

    makerpm myapp.props myapp.rpm /home/user/package 
      /home/user/package/usr/bin/myapp
      /home/user/package/usr/lib/libmyapp.so
      /home/user/package/usr/local/share/docs/myapp-help.html

will create an RPM package with the following files:

    /usr/bin/myapp
    /usr/lib/libmyapp.so
    /usr/local/share/docs/myapp-help.html

*NOTE*: Only the files you pass directly to `makerpm` are packaged. `/home/user/package/` is **not** scanned for files, and any extra files in that tree will be ignored. The 'path prefix' (`/home/user/package`) is *only* used for mangling the pathnames listed in the RPM package. It is not validated or used in any way for reading the data of the list of local files.

### Caveat emptor

`makerpm` is not stable or well-tested software. It also has lots of limitations:

  * `makerpm` is not a smart tool. It will not attempt to fix incorrectly-specified metadata, nor will it attempt to add dependencies automatically.
  * 'Documentation' and 'config' flags for individual files are not supported.
  * Lots and lots of other `RPM` features are not supported either. 



