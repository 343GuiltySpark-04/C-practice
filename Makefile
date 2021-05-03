


CFLAGS= -g  -pie -std=gnu11

INCLUDE=src/include


all: clean build

clean:
	rm -f ./*.out
	rm -f ./src/*.o


build:
	cc $(CFLAGS) src/*.c

strip:
	strip a.out