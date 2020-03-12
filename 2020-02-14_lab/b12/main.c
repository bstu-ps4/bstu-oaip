#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str = (char*) calloc(509, sizeof(char));
    printf("Input a few words\n");
    gets(str);

    char* pointer = strtok(str, " ");
    while(pointer) {
        for (int i = 1; i < strlen(pointer); i++) {
            if (pointer[0] == pointer[i]) {
                printf("%s ", pointer);
                break;
            }
        }
        pointer = strtok(NULL, " ");
    }

    free(str);
    return 0;
}
