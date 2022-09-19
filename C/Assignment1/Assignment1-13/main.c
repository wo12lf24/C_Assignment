/*
Assignment1-13
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;
    while (i <= 100) // 100이하의 수 중에 홀수끼리 더합니다.
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("홀수의 합 : %d\n", sum);
    return 0;
}