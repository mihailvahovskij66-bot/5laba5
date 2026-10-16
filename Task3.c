#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "");
    int A, B, C;
    printf("Введите три целых числа: ");
    scanf("%d %d %d", &A, &B, &C);
    int a = (A + B) % 2 == 1;
    int b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("условие выполнено (1 - да, 0 - нет): %d\n", a);
    printf("условие выполнено (1 - да, 0 - нет): %d\n", b);
    return 0;
}
