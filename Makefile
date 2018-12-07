#
# Makefile created by Carlinux
#
# Cross Compiler
#ARCH=/usr/local/arm/3.4.1/bin/arm-linux
ARCH=
# the location of the cross compiler dirs
TOOLCHAIN=

# point to the correct tools
# by overriding the standard vars that make uses for compilation
#CROSS_COMPILE=1
CC=gcc
CXX=g++
#CXX=gcc

CPP=cpp
OPJCOPY=objcopy
LD=ld
AR=gar
AS=gas
NM=nm

CFLAGS += -Wall -O2 -I./include -D_LINUX_
LIBS = 
OBJECTS = main.o 

ALL=Xmain

LIBS =  

TARGET=Xmain

all: $(ALL) 

%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC)  $(OBJECTS) $(LIBS) -o bin/$(TARGET)

install: $(ALL)

targetinstall: install
	mkdir -p $(ROOTDIR)/usr
	mkdir -p $(ROOTDIR)/usr/sbin
	(for file in $(ALL); do \
		install -m 755 $$file $(ROOTDIR)/usr/sbin; \
	done)
	(for file in $(ALL); do \
		$(STRIP) $(ROOTDIR)/usr/sbin/$$file; \
	done)

clean:
	rm -f *.o bin/$(ALL)

distclean: clean
	(for file in $(ALL); do \
		rm -f $(ROOTDIR)/usr/sbin/$$file; \
	done)





