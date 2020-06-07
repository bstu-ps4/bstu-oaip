#ifndef _MAIN_H_
    #define _MAIN_H_

    #include <stdio.h>
    #include <stdlib.h>

    struct Node
    {
        struct Node* next; //указатель на следующее поле. Получаем паровозик
        int data;
    };

    #include "add_element_to_node/add_element_to_node.h"
    #include "get_list_size/get_list_size.h"
    #include "print_list/print_list.h"
    #include "clear_list/clear_list.h"
#endif

