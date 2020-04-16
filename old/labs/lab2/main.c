#include <stdio.h>
#include <math.h>

void lab2();

int main() {
    lab2();
    return 0;
}

void lab2() {
    float x0, y0, r0, x1, y1, r1;

    printf("x_0 = "); scanf("%f", &x0);
    printf("y_0 = "); scanf("%f", &y0);
    printf("r_0 = "); scanf("%f", &r0);
    printf("x_1 = "); scanf("%f", &x1);
    printf("y_1 = "); scanf("%f", &y1);

    r1 = sqrt( pow(x1 - x0, 2) + pow(y1 - y0, 2) );

    if (r0 > r1)
        printf("\nPoint in circle\n");
    else if (r0 < r1)
        printf("\nPoint out of circle\n");
    else
        printf("\nPoint on circle\n");
}
