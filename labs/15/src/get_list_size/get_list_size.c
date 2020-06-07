#include "get_list_size.h"

int get_list_size(struct Node* node)
{
    if (node == NULL) //если список пуст, то
    {
        return -1;
    }
    else //иначе
    {
        int i = 0; //счётчик начинается с 0
        struct Node* temp = node; //указатель на начала списка
        while(temp != NULL) //пока не дошли до конца списка
        {
            temp = temp->next; //переходи в следующуюю ветку
            i++; //увеличивай счётчик
        }
        return i;
    }
}