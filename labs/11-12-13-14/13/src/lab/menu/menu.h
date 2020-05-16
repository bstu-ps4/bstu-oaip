#pragma once
#ifndef _MENU_H_
#define _MENU_H_
    #include <stdio.h>

    #include "../../my_libs/clearConsole/clearConsole.h"
    #include "../../my_libs/getch/getch.h"
    #include "../lab.h"
    #include "open_file/open_file.h"
    #include "input_data/input_data.h"
    #include "out_data/out_data.h"
    #include "sort_data/sort_data.h"
    #include "del_data/del_data.h"
    #include "save_as/save_as.h"

    void menu(int, struct structure_for_car*);
#endif