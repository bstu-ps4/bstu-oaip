#include "../inc/getch.h"

#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    int getch (void)
    {
        int ch;
        struct termios oldt, newt;

        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON|ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        ch = getchar();
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

        return ch;
    }
#endif

#if defined(_WIN32) || defined(_WIN64)
    #include <conio.h>
#endif

