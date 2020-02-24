#include <stdio.h>
#include <string.h>
int main() {
    char str[509];

    gets(str);

    char *p;

    p = strtok(str, "\\");

    char name[509];

    while (p) {
        printf("%s\n", p);
        strcpy(name, p);
        p = strtok(NULL, "\\");
    }

    printf("%s\n\n\n", name);

    p = strtok(name, ".");
    p = strtok(NULL, ".");

    strcpy(name, p);

    printf("%s\n", name);

    return 0;
}
