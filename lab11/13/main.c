#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct structure_for_car
{
    char* number[10];
    char* mark[10];
    char* surname[20];
    int osmotr;
};

void enconding();
void lab();
void menu(int, struct structure_for_car* cars_data);
void outToMenu();
void input_data();
void out_data();
void sort_data();
void del_data();

int main()
{
    lab();
    return 0;
}

void enconding()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

void lab()
{
    int ID = 0;
    struct structure_for_car* cars_data;
    cars_data = (struct structure_for_car*) calloc(ID, sizeof(struct structure_for_car));

    menu(ID, cars_data);
}

void menu(int ID, struct structure_for_car* cars_data)
{
    enconding();
    system("cls");

    printf("Меню:\n");
    printf("0. Выйти из программы\n");
    printf("1. Ввод данных\n");
    printf("2. Вывод данных\n");
    printf("3. Сортирова по полю\n");
    printf("4. Удалить запись\n");

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
    system("cls");

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
    system("cls");
    printf(
        "%4s\t%10s\t%10s\t%20s\t%s\n",
        "ID",
        "Номер",
        "Марка",
        "Фамилия",
        "Осмотр"
    );
    for (int i = 0; i < ID; i++)
    {
        printf(
            "%4d\t%10s\t%10s\t%20s\t%s\n",
            i,
            cars_data[i].number,
            cars_data[i].mark,
            cars_data[i].surname,
            cars_data[i].osmotr == 1? "Пройден": "Не пройден"
        );
    }
    outToMenu(ID, cars_data);
}

void sort_data(int ID, struct structure_for_car* cars_data)
{
    system("cls");

    outToMenu(ID, cars_data);
}

void del_data(int ID, struct structure_for_car* cars_data)
{
    system("cls");

    outToMenu(ID, cars_data);
}