#pragma once
#ifndef _SORT_DATA_H_
    #define _SORT_DATA_H_

    #include <stdio.h>
    #include <stdlib.h>

    #include "../../lab.h"
    #include "../../../my_libs/clearConsole/clearConsole.h"
    #include "../../../my_libs/getch/getch.h"
    #include "../menu.h"
    #include "mark_field_sort/mark_field_sort.h"
    #include "number_field_sort/number_field_sort.h"
    #include "osmotr_field_sort/osmotr_field_sort.h"
    #include "surname_field_sort/surname_field_sort.h"

    void sort_data(int, struct structure_for_car*);
#endif