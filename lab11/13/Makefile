main.o: main.c
	gcc -c main.c

hello: main.o
	gcc main.o -o hello

clean:
	rm -rf *.o hello

all: hello