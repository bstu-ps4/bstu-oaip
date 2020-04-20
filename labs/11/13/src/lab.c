#include "../inc/lab.h"

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

    int choosen_case;
    switch(choosen_case = getch())
    {
        case '0':
            break;
        case '1':
            input_data(ID, cars_data);
            break;
        case '2':
            out_data(ID, cars_data);
            break;
        case '3':
            sort_data(ID, cars_data);
            break;
        case '4':
            del_data(ID, cars_data);
            break;
        default:
            menu(ID, cars_data);
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
    printf("Осмотр: ");
    while (!(osmotr == '0' || osmotr == '1'))
    {
        osmotr = getch();
    }
    cars_data[ID - 1].osmotr = osmotr;

    menu(ID, cars_data);
}

void out_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("ID\t");
    printf("Номер\t");
    printf("Марка\t");
    printf("Фамилия\t");
    printf("Осмотр\t");
    printf("\n");

    for (int i = 0; i < ID; i++)
    {
        printf("%d\t", i);
        printf("%s\t", cars_data[i].number);
        printf("%s\t", cars_data[i].mark);
        printf("%s\t", cars_data[i].surname);
        printf("%s\t", (cars_data[i].osmotr == '1'? "Пройден": "Не пройден"));
        printf("\n");
    }
    pause_console();
    menu(ID, cars_data);
}

void sort_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    pause_console();
    menu(ID, cars_data);
}

void del_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    pause_console();
    menu(ID, cars_data);
}
