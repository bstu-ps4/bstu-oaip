#pragma once
#ifndef _LAB_H_
#define _LAB_H_
    #include <stdio.h>
    #include <stdlib.h>

    #include "../my_libs/clearConsole/clearConsole.h"
    #include "../my_libs/getch/getch.h"
    #include "../my_libs/pause_console/pause_console.h"
    //#include "menu.h"

    struct structure_for_car
    {
        int number_size;
        char* number;

        int mark_size;
        char* mark;

        int surname_size;
        char* surname;

        int osmotr;
    };

    void lab();
   /**/void menu(int ID, struct structure_for_car* );/**/
#endif