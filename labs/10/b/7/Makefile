APP_name = App
CC = gcc

# root folder - - - - - - - - - -
SRC_root += char_swap.c
SRC_root += get_invert_string.c
SRC_root += lab.c
SRC_root += main.c
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