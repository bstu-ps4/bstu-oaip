clearConsole.o: clearConsole.c
	gcc -c clearConsole.c

encoding.o: encoding.c
	gcc -c encoding.c

main.o: main.c
	gcc -c main.c

clean:
	rm -rf *.o App

all: clean main.o encoding.o clearConsole.o
	gcc main.o encoding.o clearConsole.o -o App