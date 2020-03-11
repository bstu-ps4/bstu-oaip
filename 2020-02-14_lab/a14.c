#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lab9_a14();
char *splitting(char *str, char *ch);

int main() {
    lab9_a14();
    return 0;
}

void lab9_a14() {
    char *str = calloc(509, sizeof(char));
    printf("Write path:\n");
    gets(str);

    char *type;
    strcpy(
           type,
           splitting( splitting(str, "\\"), ".")
    );
    free(str);

    if ( strcmp(type, "exe") == 0 )
        printf("executable file");

    else if ( strcmp(type, "jpg") == 0 || strcmp(type, "gif") == 0 )
        printf("graphic file");

    else if( strcmp(type, "doc") == 0 )
        printf("text file");

    else
        printf("the type is not registered in the database");

    free(type);
}

char *splitting(char *str, char *ch) {
    char *pointer = strtok(str, ch);
    while(pointer) {
        strcpy(str, pointer);
        pointer = strtok(NULL, ch);
    }
    free(ch);
    free(pointer);
    return str;
}
