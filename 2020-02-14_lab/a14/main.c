#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lab();

int main() {
    while(2 > 1) {
        lab();
        printf("\n\n");
    }
    return 0;
}

void lab() {
    char* str = calloc(509, sizeof(char));
    printf("path := ");
    gets(str);

    char* pointer = strtok(str, ".");
    while(pointer) {
        strcpy(str, pointer);
        pointer = strtok(NULL, ".");
    }
    free(pointer);

    if (strcmp(str, "exe") == 0) {
        printf("executable file");
    } else if (strcmp(str, "jpg") == 0 || strcmp(str, "gif") == 0) {
        printf("graphic file");
    } else if(strcmp(str, "doc") == 0) {
        printf("text file");
    } else {
        printf("the type is not registered in the database");
    }

    free(str);
}
