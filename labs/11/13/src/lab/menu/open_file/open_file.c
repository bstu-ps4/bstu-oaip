#include "open_file.h"

void open_file(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    free(cars_data); //освобождение массива, т. к. мы запишем в него новые данные из нового файла
    ID = 0; //начали нумерацию с 0

    int path_size;
    printf("Размер пути файла: ");
    scanf("%d", &path_size); //ввод размера пути файла

    char* path;
    printf("Какой файл открыть: ");
    path = (char*) calloc(path_size, sizeof(char)); //динамическое выделение памяти для пути файла
    scanf("%s", path); //ввод пути файла

    FILE* file_pointer = fopen(path, "r"); //открыли файл для чтения
    free(path); //очистка пути файла, т. к. он не нужен

    int i = 0, number_of_string = 0, string_size = 0;
    cars_data = (struct structure_for_car*) calloc(ID, sizeof(struct structure_for_car)); //динамическое выделение памяти массиву
    char* str = (char*) calloc(509, sizeof(char)); //выделение памяти для строки
    while(!feof(file_pointer)) // пока не достигнут конец файла
    {
        char ch = fgetc(file_pointer); //взять символ из файла
        if(ch != '\t' && ch != '\n') //если это не табуляция и не конец строки
        {
            string_size++; //увеличить переменную, чтобы увеличить динамический массив
            str = (char*) realloc(str, string_size * sizeof(char)); //увеличиваем динамический массив
            str[i] = ch; //записать символ в строку
            i++; // увеличить индекс на 1
            //printf("%c", ch);
        }
        else
        {
            i = 0; //индекс 0, т. к. началось новое слово

            switch(number_of_string) //определяем какой сейчас случай
            {
                case 0: //случай для ID
                    printf(" = = = = = case 0 = = = = =\n");
                    ID = atoi(str); //перевести слово в цифру
                    cars_data = (struct structure_for_car*) realloc(cars_data, (ID + 1) * sizeof(struct structure_for_car)); // увеличение динамической памяти
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                // = = = = =
                case 1: //размер номера
                    printf(" = = = = = case 1 = = = = =\n");
                    cars_data[ID].number_size = atoi(str); //строку в число, записав в структуру
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                case 2: //номер
                    printf(" = = = = = case 2 = = = = =\n");
                    cars_data[ID].number = (char*) calloc(cars_data[ID].number_size, sizeof(char)); //выделение динамической памяти
                    strcpy(cars_data[ID].number, str); //копирование строки в структуру
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                // = = = = =
                case 3: //размер марки
                    printf(" = = = = = case 3 = = = = =\n");
                    cars_data[ID].mark_size = atoi(str); //строку в число, записав в структуру
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                case 4: //марка
                    printf(" = = = = = case 4 = = = = =\n");
                    cars_data[ID].mark = (char*) calloc(cars_data[ID].mark_size, sizeof(char)); //выделение динамической памяти
                    strcpy(cars_data[ID].mark, str); //копирование строки в структуру
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                // = = = = =
                case 5: //размер фамилии
                    printf(" = = = = = case 5 = = = = =\n");
                    cars_data[ID].surname_size = atoi(str); //строку в число, записав в структуру
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                case 6: //фамилия
                    printf(" = = = = = case 6 = = = = =\n");
                    cars_data[ID].surname = (char*) calloc(cars_data[ID].surname_size, sizeof(char)); //выделение динамической памяти
                    strcpy(cars_data[ID].surname, str); //копирование строки в структуру
                    number_of_string++; //переход к следующему случаю в следующий раз
                    break;
                // = = = = =
                case 7: //осмотр
                    printf(" = = = = = case 7 = = = = =\n");
                    cars_data[ID].osmotr = atoi(str); //строку в число, записа в структуру
                    number_of_string = 0; //переход к следующему случаю в следующий раз
                    break;
            }
            printf("%s\n", str); //вывод в консоль строки, которое было записано
            free(str); // очистка строки, т. к. она уже не нужна
            string_size = 0;
            str = (char*) calloc(string_size, sizeof(char)); //выделение динамической памяти для строки
        }
    }
    free(str);
    fclose(file_pointer);

    pause_console();
    menu(ID + 1, cars_data); //ID + 1, так как вывод файлов от i = 0 до i < ID
}