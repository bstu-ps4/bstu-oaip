#include <stdio.h>
#include <math.h>

void lab4_v5_task1();
void lab4_v5_task2();

int main() {
    //lab4_v5_task1(-15.246, 4.642e-2, 20.001e+2);
    //lab4_v5_task2();
    return 0;
}

void lab4_v5_task1(double x, double y, double z) {
    float a, b, c, d, e, f, g, h, i, j, k, l;

    a = fabs(x);
    b = sqrt(a);
    c = - b;
    d = pow(y, c);
    e = log(d);
    f = y / 2;
    g = x - f;
    h = e * g;
    i = atan(z);
    j = sin(i);
    k = pow(j, 2);
    l = h + k;

    printf("a = |%e| \n= %e\n\n", x, a);
    printf("b = %e^1/2 \n= %e\n\n", a, b);
    printf("c = -%e \n= %e\n\n", b, c);
    printf("d = %e^%e \n= %e\n\n", y, c, d);
    printf("e = ln(%e) \n= %e\n\n", d, e);
    printf("f = %e / 2 \n= %e\n\n", y, f);
    printf("g = %e - %e \n= %e\n\n", x, f, g);
    printf("h = %e * %e \n= %e\n\n", e, g, h);
    printf("i = arctg(%e) \n= %e\n\n", z, i);
    printf("j = sin(%e) \n= %e\n\n", i, j);
    printf("k = %e^2 \n= %e\n\n", j, k);
    printf("l = %e + %e \n= %e\n\n", h, k, l);

    printf("%f", log(pow(y, -sqrt(fabs(x)))) * (x - y / 2) + pow(sin(atan(z)), 2));
}

void lab4_v5_task2() {
    float x, y;
    printf("x = "); scanf("%f", &x);
    printf("y = "); scanf("%f", &y);

    printf("%.3f + %.3f = %.3f\n", x, y, x + y);
    printf("%.3f - %.3f = %.3f\n", x, y, x - y);
    printf("%.3f * %.3f = %.3f\n", x, y, x * y);
    printf("%.3f / %.3f = %.3f\n", x, y, x / y);
}
