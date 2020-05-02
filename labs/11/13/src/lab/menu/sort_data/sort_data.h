#pragma once
#ifndef _SORT_DATA_H_
#define _SORT_DATA_H_
    #include "../../lab.h"
    #include "../../../my_libs/clearConsole/clearConsole.h"
    #include "../../../my_libs/getch/getch.h"
    #include "../menu.h"
    #include "get_sorted_array/get_sorted_array.h"
    #include "get_sorted_array/sort_data_in_number_field/sort_data_in_number_field.h"
    #include "get_sorted_array/sort_data_by_mark_field/sort_data_by_mark_field.h"
    #include "get_sorted_array/sort_data_by_surname_field/sort_data_by_surname_field.h"
    #include "sort_data_by_osmotr_field/sort_data_by_osmotr_field.h"

    void sort_data(int, struct structure_for_car*);
#endif