
all: makerpm printrpm

propsparser.h: propsparser.rl
	-ragel -G2 -o propsparser.h propsparser.rl

makerpm: propsparser.h rpmtags.h rpmstruct.h makerpm.cc
	g++ -std=c++11 makerpm.cc -o makerpm -lcrypto -larchive -lz

printrpm: rpmtags.h rpmstruct.h printrpm.cc
	g++ -std=c++11 printrpm.cc -o printrpm

