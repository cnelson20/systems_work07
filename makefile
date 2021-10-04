all: arrays.o
	gcc arrays.o

arrays.o: arrays.c
	gcc -c arrays.c

run:
	./a.out
