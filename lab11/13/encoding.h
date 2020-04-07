#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    #include <locale.h>
#endif

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
#endif

void encoding();