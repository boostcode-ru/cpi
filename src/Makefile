CC=gcc

CFLAGS=-g

all: build test

build: 
	$(CC) $(CFLAGS) pi.c fx.c -o pi

test:
	 /usr/bin/time -f "%e" -o test.result ./pi

clean:
	rm -rf *.o pi
