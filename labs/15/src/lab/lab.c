#include "lab.h"

void lab(struct Node* queue1, struct Node* queue2, struct Node* queue3)
{
    printf("Дано:\n");
    printf("queue 1:");
    print_list(queue1);
    printf("queue 2:");
    print_list(queue2);
    printf("queue 3:");
    print_list(queue3);
    printf("Получить: изменённый список 2 (Если список 1 есть в списке 2, то заменить его списком 3)\n");

    struct Node* ps1 = queue1, //указатель по первому списку
                * ps2 = queue2; //указатель по второму списку
    int i = 0; //счётчик элементов. Будет последний номер, когда списки сойдуться полностью
    while(
        ps1 != NULL //если не дошли до конца списка
        && ps2 != NULL //если не дошли до конца списка
        && ps1->next != NULL //если следующий элемент не конец списка
        && ps2->next != NULL //если следующий элемент не конец списка
        )
    {
        
        if (
            (ps1->data == ps2->data) //если элемент из 1ого списка равен элементу 2ого списка
            && (ps1->next->data == ps2->next->data) //если следующий элемент из 1ого списка равен элементу 2ого списка
        )
        {
            ps1 = ps1->next; //перейти к следующему элементу 1ого списка
            ps2 = ps2->next; //перейти к следующему элементу 2ого списка
        }
        else //иначе
        {
            ps1 = queue1; //переместили указатель на начало первого списка
            ps2 = ps2->next; //переход к следующему элементу 2ого списка
        }
        i++;
    }

    if (ps1->next == NULL) //если всеже списки сошлись, то у первого элемента следущий элемент NULL, что и проверяем
    {
        struct Node* temp = queue3; //указатель на список 3
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = (struct Node*) malloc(sizeof(struct Node)); //выделили память последнему элементу списка 3
        temp->next = ps2->next; //добавили списку 3 хвост от списка 2

        //здесь доходим до начала списка 2 в списке 1. На том месте ставим указатель.
        // он нам нужен, чтобы в поле next записать узел списка 3
        int b = i - get_list_size(queue1);
        struct Node* temp2 = queue2;
        for (int i = 0; i < b; i++)
        {
            temp2 = temp2->next;
        }
        temp2->next = queue3;
    }
    else //иначе, так как у нас нет списка 1 в списке 3, то мы его не соединяем
    //то есть при очистке списка 2, не очиститься список 3
    // поэтому мы очищаем список 3 сами
    {
        printf("queue 3:");
        queue3 = clear_list(queue3);
        print_list(queue3);
    }
    
    printf("Ответ: (список 2)");
    print_list(queue2);

    printf("queue 1:");
    queue1 = clear_list(queue1);
    print_list(queue1);

    printf("queue 2:");
    queue2 = clear_list(queue2);
    print_list(queue2);
}