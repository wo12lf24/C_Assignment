/*
Assignment1-11
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int num = 1;
    int sum = 0;
    while (num != 100) // 100미만의 수 중에 짝수는 빼고 홀수는 더합니다.
    {
        if (num % 2 != 0) //홀수
        {
            sum -= num++;
        }
        else //짝수
        {
            sum += num++;
        }
    }
    printf("합 : %d\n", sum);
    return 0;
}