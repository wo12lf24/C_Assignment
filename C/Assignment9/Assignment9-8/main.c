#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    FILE *fr = fopen("C_Assignment\\C\\Assignment9\\Assignment9-8\\calculate.txt", "r");

    int num1, num2, total = 0;
    char c = 0;

    while (fscanf(fr, "%d %d %c", &num1, &num2, &c) != EOF)
    {
        switch (c)
        {
        case '+':
            total = num1 + num2;
            break;
        case '-':
            total = num1 - num2;
            break;
        case '*':
            total = num1 * num2;
            break;
        case '/':
            total = num1 / num2;
            break;
        case '%':
            total = num1 % num2;
            break;
        }
        printf("%d %c %d = %d \n", num1, c, num2, total);
    }
}