#include "out_data.h"

void out_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole(); //очистка консоли

    FILE *file_pointer = fopen("indices.txt", "r"); //открыли файл для чтения
    if (file_pointer == NULL) //если файл не открылся
    {
        printf("[!] Индексный файл не найден!\n");
    }
    else // если файл открылся успешно
    {
        int i = 0; //для итераций индексного массива
        int* indices_array = (int*) calloc(ID, sizeof(int)); //выделение динамической памяти массиву
        int number_size = 0; //размер номера
        char* number = (char*) calloc(number_size, sizeof(char));
        while (!feof(file_pointer)) //пока не достигнут конец файла, делай это
        {
            char ch = fgetc(file_pointer);
            if (ch == '\n') //если это конец строки
            {
                indices_array[i] = atoi(number); //записали число в массив индексов
                i++; //переход к следующему элементу массива
                free(number); //освободили память
                number_size = 0; //теперь размер слова 0 символов
                number = (char*) calloc(number_size, sizeof(char)); //динамическое выделение памяти
            }
            else //если это не конец строки
            {
                number[number_size] = ch; //записали символ в слово
                number_size++; //перешли к следующему индексу в слове
                number = (char*) realloc(number, number_size * sizeof(char)); //выделение памяти под новый символ
            } //конец проверки конца строки
        } //конец цикла проверки конца файла
        write_table(ID, cars_data, i, indices_array);
    } //конец проверки открытия файла
    
    fclose(file_pointer); //закрыть файл

    pause_console(); //ждать нажатие клавиши пользователем
    menu(ID, cars_data); //вывод меню
}