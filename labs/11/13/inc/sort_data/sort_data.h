#pragma once
#ifndef _SORT_DATA_H_
#define _SORT_DATA_H_
    #include "../lab.h"
    #include "../clearConsole.h"
    #include "../getch.h"
    #include "../menu.h"
    #include "sort_data_in_number_field.h"
    #include "sort_data_by_mark_field.h"
    #include "sort_data_by_surname_field.h"
    #include "sort_data_by_osmotr_field.h"

    void sort_data(int, struct structure_for_car*);
    void get_sorted_array(int, struct structure_for_car*, void (*)(int, struct structure_for_car*, int, int, int));
#endif