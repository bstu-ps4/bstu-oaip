#include "input_osmotr.h"

void input_osmotr(int ID, struct structure_for_car* cars_data)
{
    printf("\n");
    printf("Осмотр:\n");
    printf("1. Есть осмотр\n");
    printf("2. Нет осмотра\n");
    
    int choosen_case = getch();

    switch(choosen_case)
    {
        case '1':
            cars_data[ID - 1].osmotr = yes;
            break;
        case '2':
            cars_data[ID - 1].osmotr = no;
            break;
        default:
            input_osmotr(ID, cars_data);
    }
}