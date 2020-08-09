#This Makefile compiles JaiSriRam project

#Variable declaration
CC=g++

CFLAGS=-c -Wall

#Target definitions

all: main.o add.o
	@echo "Generating Executable"
	$(CC) main.o add.o -o JaiSriRam

%.o: %.cpp
	@echo "Compiling $<"
	$(CC) $(CFLAGS) $<
	

%.o: %.cpp
	@echo "Compiling $<"
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *o JaiSriRam

main.o: main.cpp add.o
add.o: add.cpp