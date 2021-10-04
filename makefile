all: arrays.o
	gcc -o arstuf arrays.o

arrays.o: arrays.c
	gcc -c arrays.c

run:
	./arstuf
