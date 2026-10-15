#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    const double k = 8.2;
    double x, a, b, y;
    int A, B, C;
    printf("Введите x: ");
    scanf("%lf", &x);
    b = sqrt(fabs(x));
    a = pow(b, 4) + pow(k, 3);
    y = pow(log(a), 3) + exp(-x);
    printf("При x = %g значение y = %.2f\n", x, y);
    A = (int)a;
    B = (int)b;
    C = (int)y;
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("Условие выполнено (1 - да, 0 - нет):\n");
    printf("а) Только одно число четное: %d\n",
        (A % 2 == 0) != (B % 2 == 0));
    printf("б) Все три числа кратны трем: %d\n",
        A % 3 == 0 && B % 3 == 0 && C % 3 == 0);
    return 0;
}