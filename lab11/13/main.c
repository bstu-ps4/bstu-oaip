#include <stdio.h>
#include <stdlib.h>

struct structure_for_car
{
    char* number[10];
    char* mark[10];
    char* surname[20];
    int osmotr;
};

void lab();
void menu();
void outToMenu();
void input_data();
void out_data();
void sort_data();
void del_data();

int main()
{
    lab();
    system("pause");
    return 0;
}

void lab()
{
    int ID = 1;
    struct structure_for_car* cars_data;
    cars_data = (struct structure_for_car*) calloc(ID, sizeof(struct structure_for_car));

    menu();
}

void menu()
{
    system("chcp 65001");
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
            input_data();
            break;
        case 2:
            out_data();
            break;
        case 3:
            sort_data();
            break;
        case 4:
            del_data();
            break;
        default:
            menu();
    }
}

void outToMenu()
{
    printf("\n");
    printf("0. Выйти в главное меню\n");
    int choosenCase;
    scanf("%d", &choosenCase);

    switch(choosenCase)
    {
        case 0:
            menu();
            break;
        default:
            outToMenu();
    }
}

void input_data()
{
    printf("funct 1 - input data\n");
    outToMenu();
}

void out_data()
{
    printf("funct 2 - out data\n");
    outToMenu();
}

void sort_data()
{
    printf("funct 3 - sort data\n");
    outToMenu();
}

void del_data()
{
    printf("funct 4 - del data\n");
    outToMenu();
}