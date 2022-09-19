/*
Assignment1-10
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int num = 0;

    for (int i = 1; i <= 10; i++) // 1부터 10까지 더하는 식을 출력하고
    {
        if (num != 0)
        {
            printf("(");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            num += j; // 그 값을 모두 더합니다.
            if (j != i)
            {
                printf(" + ");
            }
        }
        if (num > 1)
        {
            printf(")");
        }
        if (i != 10)
        {
            printf(" + ");
        }
    }
    printf(" = %d\n", num);
    return 0;
}