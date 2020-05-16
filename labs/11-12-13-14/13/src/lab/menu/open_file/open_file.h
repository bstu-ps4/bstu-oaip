#pragma once
#ifndef _OPEN_FILE_H_
    #define _OPEN_FILE_H_
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "../../../my_libs/clearConsole/clearConsole.h"
    #include "../../../my_libs/pause_console/pause_console.h"
    #include "../../../my_libs/getch/getch.h"
    #include "../../lab.h"
    #include "../menu.h"
    #include "get_file_pointer/get_file_pointer.h"
    #include "if_file_not_founded/if_file_not_founded.h"

    void open_file(int, struct structure_for_car*);
#endif