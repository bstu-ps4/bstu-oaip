#include <stdio.h>

void lab5_v5_task1();
void lab5_v5_task2();
void lab5_v5_task2_if();

int main() {
    //lab5_v5_task1();
    //lab5_v5_task2();
    //lab5_v5_task2_if();
    return 0;
}

void lab5_v5_task1() {
    float x; printf("x = "); scanf("%f", &x);

    if (x > 0)
        printf("%3.3f is positive number\n", x);
    else if (x == 0)
        printf("%3.3f is not positive and not negative number\n", x);
    else
        printf("%3.3f is negative number\n", x);
}

void lab5_v5_task2() {
    int e; printf("e = "); scanf("%d", &e);

    switch(e) {
        case 0: printf("%d - %c\n", e, e); break;
        case 1: printf("%d - %c\n", e, e); break;
        case 2: printf("%d - %c\n", e, e); break;
        case 3: printf("%d - %c\n", e, e); break;
        case 4: printf("%d - %c\n", e, e); break;
        case 5: printf("%d - %c\n", e, e); break;
        case 6: printf("%d - %c\n", e, e); break;
        case 7: printf("%d - %c\n", e, e); break;
        case 8: printf("%d - %c\n", e, e); break;
        case 9: printf("%d - %c\n", e, e); break;
        default: printf("%d - does not satisfy the condition, but char is - <<%c>>\n", e, e);
    }
}

void lab5_v5_task2_if() {
    int e; printf("e = "); scanf("%d", &e);

    if (e >= 0 && e <= 9)
        printf("%d - %c\n", e, e);
    else
        printf("%d - does not satisfy the condition, but char is - <<%c>>\n", e, e);
}
