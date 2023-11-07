CC=gcc
CFLAGS=-g -pedantic -std=gnu17 -Wall -Werror -Wextra

.PHONY: all
all: test

test: skiplist_seq.o test.o

skiplist_seq.o: skiplist_seq.c skiplist_seq.h

test.o: test.c skiplist_seq.h

.PHONY: clean
clean:
	rm -f *.o test