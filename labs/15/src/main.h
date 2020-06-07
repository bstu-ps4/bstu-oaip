#ifndef _MAIN_H_
    #define _MAIN_H_

    #include <stdio.h>
    #include <stdlib.h>

    #include "lab/lab.h"
    #include "add_element_to_node/add_element_to_node.h"

    struct Node
    {
        struct Node* next; //указатель на следующее поле. Получаем паровозик
        int data;
    };
#endif