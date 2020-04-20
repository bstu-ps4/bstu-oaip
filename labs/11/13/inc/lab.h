#pragma once
#ifndef _LAB_H_
#define _LAB_H_
    #include <stdio.h>
    #include <stdlib.h>

    #include "clearConsole.h"
    #include "getch.h"
    #include "pause_console.h"

    struct structure_for_car
    {
        int number_size;
        char number[10];

        int mark_size;
        char mark[10];

        int surname_size;
        char surname[20];

        int osmotr;
    };

    void lab();
    void menu(int ID, struct structure_for_car* );
#endif