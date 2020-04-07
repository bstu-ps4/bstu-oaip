lab.o: src/lab.c
	gcc -c src/lab.c

clearConsole.o: src/clearConsole.c
	gcc -c src/clearConsole.c

encoding.o: src/encoding.c
	gcc -c src/encoding.c

main.o: src/main.c
	gcc -c src/main.c

clean:
	rm -rf *.o App

all: clean main.o encoding.o clearConsole.o lab.o
	gcc main.o encoding.o clearConsole.o lab.o -o App