/*
Assignment9-11
�й�:2019202003
�̸�:������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char getchar_f()
{
    return fgetc(stdin);
}

void putchar_f(char c)
{
    fputc(c, stdout);
    return;
}

int main(void)
{
    printf("�Ʒ��� getchar_f, putchar_f�� test�Դϴ�.\n");
    char test = getchar_f();
    putchar_f(test);

    getchar_f();
    printf("\n\n�Ʒ��� getchar, putchar�� test�Դϴ�.\n");

    int a = getchar();
    putchar(a);
    printf("\n");
    return 0;
}