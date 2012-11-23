makerpm
=======

### What is it?

A clean, simple RPM packager reimplemented completely from scratch.

It converts `cpio` or `tar` archives into installable binary `RPM` packages.

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

    makerpm <rpm spec file> <input archive file> <output RPM file>

where

`rpm spec file` is a file listing `RPM` metadata properties. (See `test.rpmprops` for an example.)

`input archive file` is an archive with the files you want to package. 
**NOTE**: Only _uncompressed_ `cpio` and `tar` archives are supported for now!

`output RPM file` is a filename for writing the resulting `RPM` package.

### Caveat emptor

`makerpm` is not stable or well-tested software. It also has lots of limitations:

  * `makerpm` is not a smart tool. It will not attempt to fix incorrectly-specified metadata, nor will it attempt to add dependencies automatically.
  * MD5 digests for individual files are not packaged. (SHA1 and MD5 signatures for the package as a whole are still generated, however, like for any well-behaved `RPM` package.)
  * 'Documentation' and 'config' flags for individual files are not supported.
  * Lots and lots of other `RPM` features are not supported either. In general, only what can be gleaned from a `cpio` archive is packaged, along with a several metadata fields if they have been explicitly provided by the user in the properties input file.
