#pragma once
#ifndef _INPUT_DATA_H_
#define _INPUT_DATA_H_
    #include <stdio.h>
    #include <stdlib.h>

    #include "../../lab.h"
    #include "../../../my_libs/clearConsole/clearConsole.h"
    #include "../menu.h"
    #include "input_number/input_number.h"
    #include "input_mark/input_mark.h"
    #include "input_surname/input_surname.h"
    #include "input_osmotr/input_osmotr.h"

    void input_data(int, struct structure_for_car*);
#endif