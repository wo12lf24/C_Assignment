/*
Assignment12-6
학번:2019202003
이름:김주형
*/
#include <stdio.h>

char stack[51];
int top = 0;

int main()
{
    int n;
    printf("입력할 정수의 개수 : ");
    scanf("%d", &n);
    int num;

    while (n--)
    {
        printf("정수 : ");
        scanf("%d", &num);
        if (num < 10 && num % 2 == 0)
            stack[top++] = num + '0';
    }
    printf("{");

    while (top--)
    {
        printf("%c", stack[top]);
        if (top)
            printf(",");
    }
    printf("}\n");
    return 0;
}