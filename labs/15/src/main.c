#include "main.h"

void test1(struct Node* queue1, struct Node* queue2, struct Node* queue3);
void test2(struct Node* queue1, struct Node* queue2, struct Node* queue3);

int main()
{
    struct Node * queue1 = NULL, //стартовый узел
                * queue2 = NULL, //стартовый узел
                * queue3 = NULL; //стартовый узел

    printf("Test 1\n");
    test1(queue1, queue2, queue3);

    printf("\n= = =\n\n");

    printf("Test 2\n");
    test2(queue1, queue2, queue3);

    return 0;
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

    lab(queue1, queue2, queue3);
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

    lab(queue1, queue2, queue3); 
}
