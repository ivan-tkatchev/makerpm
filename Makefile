
all: makerpm printrpm

makerpm: rpmtags.h rpmstruct.h makerpm.cc
	g++ -std=c++11 makerpm.cc -o makerpm -lcrypto -larchive -lz

printrpm: rpmtags.h rpmstruct.h printrpm.cc
	g++ -std=c++11 printrpm.cc -o printrpm
 
