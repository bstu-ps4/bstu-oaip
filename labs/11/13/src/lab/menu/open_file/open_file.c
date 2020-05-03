#include "open_file.h"

#include <string.h>

void open_file(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    free(cars_data);

    int path_size;
    printf("Размер пути файла: ");
    scanf("%d", &path_size);

    char* path;
    printf("Какой файл открыть: ");
    path = (char*) calloc(path_size, sizeof(char));
    scanf("%s", path);

    FILE* file_pointer = fopen(path, "r");
    free(path);


    int i = 0, number_of_string = 0, cycle_ID = 0;
    cars_data = (struct structure_for_car*) calloc(cycle_ID, sizeof(struct structure_for_car));
    char* str = (char*) calloc(509, sizeof(char));
    while(!feof(file_pointer)) // пока не достигнут конец файла
    {
        char ch = fgetc(file_pointer);
        if(ch != '\t' && ch != '\n')
        {
            
            str[i] = ch;
            i++;
            //printf("%c", ch);
        }
        else
        {
            i = 0;

            switch(number_of_string)
            {
                case 0: //ID
                printf(" = = = = = case 0 = = = = =\n");
                    cycle_ID = atoi(str) + 1;
                    cars_data = (struct structure_for_car*) realloc(cars_data, cycle_ID * sizeof(struct structure_for_car));
                    number_of_string++;
                    break;
                // = = = = =
                case 1: //размер номера
                printf(" = = = = = case 1 = = = = =\n");
                    cars_data[cycle_ID - 1].number_size = atoi(str);
                    number_of_string++;
                    break;
                case 2: //номер
                printf(" = = = = = case 2 = = = = =\n");
                    cars_data[cycle_ID - 1].number = (char*) calloc(cars_data[cycle_ID].number_size, sizeof(char));
                    strcpy(cars_data[cycle_ID - 1].number, str);
                    number_of_string++;
                    break;
                // = = = = =
                case 3: //размер марки
                printf(" = = = = = case 3 = = = = =\n");
                    cars_data[cycle_ID - 1].mark_size = atoi(str);
                    number_of_string++;
                    break;
                case 4: //марка
                printf(" = = = = = case 4 = = = = =\n");
                    cars_data[cycle_ID - 1].mark = (char*) calloc(cars_data[cycle_ID].mark_size, sizeof(char));
                    strcpy(cars_data[cycle_ID - 1].mark, str);
                    number_of_string++;
                    break;
                // = = = = =
                case 5: //размер фамилии
                printf(" = = = = = case 5 = = = = =\n");
                    cars_data[cycle_ID - 1].surname_size = atoi(str);
                    number_of_string++;
                    break;
                case 6: //фамилия
                printf(" = = = = = case 6 = = = = =\n");
                    cars_data[cycle_ID - 1].surname = (char*) calloc(cars_data[cycle_ID].surname_size, sizeof(char));
                    strcpy(cars_data[cycle_ID - 1].surname, str);
                    number_of_string++;
                    break;
                // = = = = =
                case 7: //осмотр
                printf(" = = = = = case 7 = = = = =\n");
                    cars_data[cycle_ID - 1].osmotr = atoi(str);
                    number_of_string = 0;
                    break;
            }

            printf("%s\n", str);

            free(str);
            str = (char*) calloc(509, sizeof(char));
        }
        

    }
    free(str);
    ID = cycle_ID;
    fclose(file_pointer);

    pause_console();

    menu(ID, cars_data);
}