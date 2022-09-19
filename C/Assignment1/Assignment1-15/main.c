/*
Assignment1-15
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0) //약수의 개수가 없다면
    {
        printf("소수입니다.\n"); //소수이고
    }
    else //약수의 개수가 있다면
    {
        printf("소수가 아닙니다.\n"); //소수가 아닙니다.
    }

    return 0;
}