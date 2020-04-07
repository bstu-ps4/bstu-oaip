#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    #include <locale.h>
#endif

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
#endif


void encoding(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    setlocale(0, " ");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    //вывод русских букв из переменной (когда у нас кодировка UTF-8) - ?
    #endif
}
