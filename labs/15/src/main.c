#include "main.h"

void print_line();
void print_task(struct Node* queue1, struct Node* queue2, struct Node* queue3);
void clean_list_and_check_it(struct Node* queue1, struct Node* queue2);
void test1(struct Node* queue1, struct Node* queue2, struct Node* queue3);
void test2(struct Node* queue1, struct Node* queue2, struct Node* queue3);

int main()
{
    struct Node * queue1 = NULL, //стартовый узел
                * queue2 = NULL, //стартовый узел
                * queue3 = NULL; //стартовый узел

    printf("Test 1\n");
    test1(queue1, queue2, queue3);

    print_line();

    printf("Test 2\n");
    test2(queue1, queue2, queue3);

    return 0;
}

void print_line()
{
    printf("\n= = = = = = = = = = = = = = =\n\n");
}

void print_task(struct Node* queue1, struct Node* queue2, struct Node* queue3)
{
    printf("Дано:\n");
    printf("queue 1:");
    print_list(queue1);
    printf("queue 2:");
    print_list(queue2);
    printf("queue 3:");
    print_list(queue3);
    printf("Получить: изменённый список 2 (Если список 1 есть в списке 2, то заменить его списком 3)\n");

    print_line();
}

void clean_list_and_check_it(struct Node* queue1, struct Node* queue2)
{
    print_line();

    printf("Проверка очистки списков, при завершении программы\n");
    printf("queue 1:");
    queue1 = clear_list(queue1);
    print_list(queue1);

    printf("queue 2:");
    queue2 = clear_list(queue2);
    print_list(queue2);
}

void test1(struct Node* queue1, struct Node* queue2, struct Node* queue3)
{
    //здесь заполняем список 1
    queue1 = add_element_to_node(100, queue1);
    queue1 = add_element_to_node(200, queue1);
    queue1 = add_element_to_node(300, queue1);
    queue1 = add_element_to_node(400, queue1);

    //здесь заполняем список 2
    queue2 = add_element_to_node(111111, queue2);
    queue2 = add_element_to_node(222222, queue2);
    queue2 = add_element_to_node(200, queue2);
    queue2 = add_element_to_node(300, queue2);
    queue2 = add_element_to_node(400, queue2);
    queue2 = add_element_to_node(333333, queue2);
    queue2 = add_element_to_node(444444, queue2);

    //здесь заполняем список 3
    queue3 = add_element_to_node(11223344, queue3);
    queue3 = add_element_to_node(55667788, queue3);
    queue3 = add_element_to_node(99001122, queue3);

    print_task(queue1, queue2, queue3);

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

    printf("Ответ: (список 2)");
    print_list(queue2);

    clean_list_and_check_it(queue1, queue2);
}

void test2(struct Node* queue1, struct Node* queue2, struct Node* queue3)
{
    //здесь заполняем список 1
    queue1 = add_element_to_node(1, queue1);
    queue1 = add_element_to_node(2, queue1);
    queue1 = add_element_to_node(3, queue1);
    queue1 = add_element_to_node(4, queue1);

    //здесь заполняем список 2
    queue2 = add_element_to_node(100, queue2);
    queue2 = add_element_to_node(111, queue2);
    //вот наш список 1 в списке 2
    queue2 = add_element_to_node(1, queue2);
    queue2 = add_element_to_node(2, queue2);
    queue2 = add_element_to_node(3, queue2);
    queue2 = add_element_to_node(4, queue2);
    //вот конец списока 1 в списке 2
    queue2 = add_element_to_node(2, queue2);
    queue2 = add_element_to_node(3, queue2);
    queue2 = add_element_to_node(4, queue2);
    queue2 = add_element_to_node(2, queue2);
    queue2 = add_element_to_node(3, queue2);
    queue2 = add_element_to_node(4, queue2);
    queue2 = add_element_to_node(2, queue2);
    queue2 = add_element_to_node(3, queue2);
    queue2 = add_element_to_node(4, queue2);
    queue2 = add_element_to_node(200, queue2);
    queue2 = add_element_to_node(300, queue2);

    //здесь заполняем список 3
    queue3 = add_element_to_node(22222222, queue3);
    queue3 = add_element_to_node(33333333, queue3);
    queue3 = add_element_to_node(444444444, queue3);

    print_task(queue1, queue2, queue3);

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

    printf("Ответ: (список 2)");
    print_list(queue2);

    clean_list_and_check_it(queue1, queue2);
}