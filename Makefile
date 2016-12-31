CXX ?= g++
CXXFLAGS ?=

.PHONY: all clean

all: makerpm 

propsparser.h: propsparser.rl
	-ragel -G2 -o propsparser.h propsparser.rl

makerpm: propsparser.h rpmtags.h rpmstruct.h mfile.h rpmprops.h makerpm.cc
	$(CXX) -Wall -std=c++11 $(CXXFLAGS) makerpm.cc -o makerpm -lcrypto -larchive -lz

printrpm: rpmtags.h rpmstruct.h mfile.h printrpm.cc
	$(CXX) -Wall -std=c++11 $(CXXFLAGS) printrpm.cc -o printrpm

clean:
	-rm -f makerpm printrpm
##

#makerpm_static: propsparser.h rpmtags.h rpmstruct.h makerpm.cc
#	g++ -std=c++11 makerpm.cc -static -o makerpm_static -Wl,--start-group -lcrypto -larchive -lz -lbz2 -llzma -lexpat -ldl -Wl,--end-group

