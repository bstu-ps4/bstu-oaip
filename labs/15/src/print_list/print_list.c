#include "print_list.h"

void print_list(struct Node* node)
{
    if (node != NULL) //если не список пуст
    {
        for (struct Node* temp = node; temp != NULL;)
        {
            printf(" > %d", temp->data); //выводим элемент
            temp = temp->next; //переходим по следующим веткам
        }  
    }
    printf(" > NULL\n");
}