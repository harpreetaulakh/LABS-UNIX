CC=g++
CFLAGS=-I
CFLAGS+=-Wall
CFLAGS+=-c
AR=ar
pidUtil: lab2.cpp
 $(CC) $(CFLAGS) lab2.cpp -o pidUtil.o
lib: pidUtil.o
$(AR) rcs libPidUtil.a pidUtil.o
clean:
 rm -f *.o *.a
install:
 cp libPidUtil.a ../.
 cp pidUtil.h ../.
all: pidUtil lib 