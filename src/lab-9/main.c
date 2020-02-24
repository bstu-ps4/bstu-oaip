#include <stdio.h>
#include <string.h>
int main() {
    char str[509];

    printf("Write path:\n");
    gets(str);

    char *p;

    p = strtok(str, "\\");

    char name[509];

    while (p) {
        strcpy(name, p);
        p = strtok(NULL, "\\");
    }

    p = strtok(name, ".");

    while(p) {
        strcpy(name, p);
        p = strtok(NULL, ".");
    }

    printf("%s\n", name);

    return 0;
}
