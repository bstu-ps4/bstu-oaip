#include "../inc/del_data.h"

void del_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    int delete_ID;
    printf("Какой элемент удалить: ");
    scanf("%d", &delete_ID);

    if (delete_ID < ID)
    {
        ID--;
        for (int i = delete_ID; i < ID; i++)
        {
            cars_data[i] = cars_data[i + 1];
        }
    }

    menu(ID, cars_data);
}