#pragma once
#ifndef _GETCH_H_
#define _GETCH_H_
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        #include <termios.h>
        #include <unistd.h>
        #include <stdio.h>
        int getch (void);
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        #include <conio.h>
    #endif
#endif