#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846
int main(void)
{
    setlocale(LC_ALL, "");
    double gr;
    double result;
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);
    result = sin(gr * M_PI / 180);
    printf("%.6f\n", result);
    return 0;
}