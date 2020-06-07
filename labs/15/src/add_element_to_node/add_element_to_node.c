#include "add_element_to_node.h"

struct Node* add_element_to_node(int element, struct Node* node)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));//выделили память под новый узел
    newNode->next = node; //в новый узел в поле next леждит старый узел
    newNode->data = element; //в новый узел добавили элемент
    return newNode; //возвратили новый список
}