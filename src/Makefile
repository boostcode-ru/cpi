CC=gcc

CFLAGS=-g

PATH := /opt/intel/parallel_studio_xe_2019/vtune_amplifier_2019/bin64/:$(PATH)

all: build test

build: 
	$(CC) $(CFLAGS) pi.c fx.c -o pi

test:
	 /usr/bin/time -f "%e" -o test.result ./pi

clean:
	rm -rf *.o pi