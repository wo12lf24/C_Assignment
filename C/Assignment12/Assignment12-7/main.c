/*
Assignment12-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>

char stack[51];
int top = 0;

int main()
{
    int n;
    scanf("%d", &n);
    int t = n;
    int num = 0;

    while (n)
    {
        stack[top++] = n % 10;
        n /= 10;
    }
    int tt = 1;
    for (int i = top - 1; i >= 0; i--)
    {
        num += tt * stack[i];
        tt *= 10;
    }
    if (t > num)
        printf("bigger");
    else if (t < num)
        printf("smaller");
    else
        printf("equal");
    return 0;
}