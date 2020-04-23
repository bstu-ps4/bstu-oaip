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
SRC_root += menu.c
SRC_root += out_data.c
SRC_root += pause_console.c
# end root folder - - - - - - - - - -

# root folder - - - - - - - - - -
SRC_SORT_DATA += sort_data_by_mark_field.c
SRC_SORT_DATA += sort_data_by_osmotr_field.c
SRC_SORT_DATA += sort_data_by_surname_field.c
SRC_SORT_DATA += sort_data_in_number_field.c
SRC_SORT_DATA += sort_data.c
# end root folder - - - - - - - - - -

SOURCES = $(SRC_root) $(SRC_SORT_DATA)
OBJECTS = $(SOURCES:.c=.o)

all:
	$(CC) -c $(addprefix src/, $(SRC_root))
	$(CC) -c $(addprefix src/sort_data/, $(SRC_SORT_DATA))
	$(CC) $(OBJECTS) -o $(APP_name)

run:
	./$(APP_name)

clean:
	rm -rf *.o
	rm -rf ./$(APP_name)