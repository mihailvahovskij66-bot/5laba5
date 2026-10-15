#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    const double k = 8.2;
    double x, a, b, y;
    printf("Введите x: ");
    scanf("%lf", &x);
    b = sqrt(fabs(x));
    a = pow(b, 4) + pow(k, 3);
    y = pow(log(a), 3) + exp(-x);
    printf("При x = %g значение y = %.2f\n", x, y);
    return 0;
}