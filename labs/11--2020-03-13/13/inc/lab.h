#include <stdio.h>
#include <stdlib.h>
#include "clearConsole.h"

struct structure_for_car
{
    char number[10];
    char mark[10];
    char surname[20];
    int osmotr;
};

void lab();
void menu(int ID, struct structure_for_car* cars_data);
void outToMenu(int ID, struct structure_for_car* cars_data);
void input_data(int ID, struct structure_for_car* cars_data);
void out_data(int ID, struct structure_for_car* cars_data);
void sort_data(int ID, struct structure_for_car* cars_data);
void del_data(int ID, struct structure_for_car* cars_data);
