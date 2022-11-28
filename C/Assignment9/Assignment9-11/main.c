/*
Assignment9-11
학번:2019202003
이름:김주형
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
    printf("아래는 getchar_f, putchar_f의 test입니다.\n");
    char test = getchar_f();
    putchar_f(test);

    getchar_f();
    printf("\n\n아래는 getchar, putchar의 test입니다.\n");

    int a = getchar();
    putchar(a);
    printf("\n");
    return 0;
}