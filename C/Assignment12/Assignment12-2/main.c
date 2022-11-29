/*
Assignment12-2
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#define max 100

char stack[max];
int top = 0;
void main()
{
    printf("입력 : ");
    int num;
    scanf("%d", &num);

    while (num)
    {
        stack[top++] = num % 2 + '0';
        num /= 2;
    }
    printf("출력 : %s\n", &stack);
}