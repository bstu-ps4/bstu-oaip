#include "encoding.h"

void encoding()
{
    #if defined(_WIN32) || defined(_WIN64)
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);
        //нужно подумать над выводом кирилицы из переменной при UTF-8
    #endif
}
