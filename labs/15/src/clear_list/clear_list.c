#include "clear_list.h"

struct Node* clear_list(struct Node* node)
{
    if (node == NULL) //если список пуст, то
    {
        printf("Список уже очищен - нет чего очищать\n\n");
    }
    else //иначе
    {
        for (struct Node* temp = node; temp != NULL;)
        {
            temp = node->next; //переходим в следующий узел
            free(node); //предыдущий узел очищаем
            node = temp;
        }
        printf("Список был очищен\n\n");
    }

    return node;
}