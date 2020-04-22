#pragma once
#ifndef _SORT_DATA_H_
#define _SORT_DATA_H_
    #include "lab.h"
    #include "clearConsole.h"
    #include "getch.h"
    #include "menu.h"

    void sort_data(int, struct structure_for_car*);
    void sort_data_by_number_field(int, struct structure_for_car*);
    void sort_data_by_mark_field(int, struct structure_for_car*);
    void sort_data_by_surname_field(int, struct structure_for_car*);
    void sort_data_by_osmotr_field(int, struct structure_for_car*);
#endif