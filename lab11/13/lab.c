#include "lab.h"

void lab()
{
    int ID = 0;
    struct structure_for_car* cars_data;
    cars_data = (struct structure_for_car*) calloc(ID, sizeof(struct structure_for_car));

    menu(ID, cars_data);
}

void menu(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("Меню:\n");
    printf("1. Ввод данных\n");
    printf("2. Вывод данных\n");
    printf("3. Сортирова по полю\n");
    printf("4. Удалить запись\n");
    printf("0. Выйти из программы\n");

    int choosen_menu_case;
    scanf("%d", &choosen_menu_case);

    switch(choosen_menu_case)
    {
        case 0:
            break;
        case 1:
            input_data(ID, cars_data);
            break;
        case 2:
            out_data(ID, cars_data);
            break;
        case 3:
            sort_data(ID, cars_data);
            break;
        case 4:
            del_data(ID, cars_data);
            break;
        default:
            menu(ID, cars_data);
    }
}

void outToMenu(int ID, struct structure_for_car* cars_data)
{
    printf("\n");
    printf("0. Выйти в главное меню\n");
    int choosenCase;
    scanf("%d", &choosenCase);

    switch(choosenCase)
    {
        case 0:
            menu(ID, cars_data);
            break;
        default:
            outToMenu(ID, cars_data);
    }
}

void input_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    ID++;
    cars_data = (struct structure_for_car*) realloc(cars_data, ID * sizeof(struct structure_for_car));


    printf("Номер машины: ");
    scanf("%s", cars_data[ID - 1].number);


    printf("Марка машины: ");
    scanf("%s", cars_data[ID - 1].mark);


    printf("Фамилия владельца: ");
    scanf("%s", cars_data[ID - 1].surname);


    int osmotr = 2;
    while (!(osmotr == 0 || osmotr == 1))
    {
        printf("Осмотр: ");
        scanf("%d", &osmotr);
    }
    cars_data[ID - 1].osmotr = osmotr;

    menu(ID, cars_data);
}

void out_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("ID  ");                 //printf("%-4s", "ID");
    printf("Номер     ");           //printf("%-10s","Номер");
    printf("Марка     ");           //printf("%-10s", "Марка");
    printf("Фамилия             "); //printf("%-20s", "Фамилия");
    printf("Осмотр    ");           //printf("%-10s", "Осмотр");
    printf("\n");

    for (int i = 0; i < ID; i++)
    {
        printf("%-4d", i);
        printf("%-10s", cars_data[i].number);
        printf("%-10s", cars_data[i].mark);
        printf("%-20s", cars_data[i].surname);
        printf("%-10s", (cars_data[i].osmotr == 1? "Пройден": "Не пройден"));
        printf("\n");
    }
    outToMenu(ID, cars_data);
}

void sort_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    outToMenu(ID, cars_data);
}

void del_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    outToMenu(ID, cars_data);
}
