CC=gcc
CFLAGS=-Wall -g

all: main

main: main.o array.o list.o
	$(CC) $(CFLAGS) -o main mai.o array.o list.o

main.o: main.c array.h list.h
array.o: array.c array.h
list.o: list.c list.h

clean:
	rm -f *.o main
