
all: writerpm printrpm

writerpm: rpmtags.h rpmstruct.h writerpm.cc
	g++ -std=c++11 writerpm.cc -o writerpm -lcrypto -larchive -lz

printrpm: rpmtags.h rpmstruct.h printrpm.cc
	g++ -std=c++11 printrpm.cc -o printrpm
 
