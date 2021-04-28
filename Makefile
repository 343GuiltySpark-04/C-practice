
CFLAGS= -Wint-conversion -std=gnu11


all: clean build

clean:
	rm -f ./*.out



build:
	gcc -v -g $(CFLAGS) src/main.c