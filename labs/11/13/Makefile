APP_name = App
CC = gcc

# root folder - - - - - - - - - -
SRC_root += clearConsole.c
SRC_root += del_data.c
SRC_root += encoding.c
SRC_root += getch.c
SRC_root += input_data.c
SRC_root += lab.c
SRC_root += main.c
SRC_root += out_data.c
SRC_root += pause_console.c
SRC_root += sort_data.c
# end root folder - - - - - - - - - -

SOURCES = $(SRC_root)
OBJECTS = $(SOURCES:.c=.o)

all:
	$(CC) -c $(addprefix src/, $(SRC_root))
	$(CC) $(OBJECTS) -o $(APP_name)

run:
	./$(APP_name)

clean:
	rm -rf *.o
	rm -rf ./$(APP_name)