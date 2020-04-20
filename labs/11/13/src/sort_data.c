#include "../inc/sort_data.h"

void sort_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    pause_console();
    menu(ID, cars_data);
}