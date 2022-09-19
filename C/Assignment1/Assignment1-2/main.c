/*
Assignment1-2
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void recursion(int num) //재귀를 이용해서 10진수를 2진수로 표현.
{
    if (num < 2) // 10진수가 2보다 작으면 그 10진수를 출력
    {
        printf("%d", num);
    }
    else // 10진수가 2이상이면
    {
        recursion(num / 2);    //그 10진수를 2로 나눈 몫을 recursion함수에 다시 넣음
        printf("%d", num % 2); //그리고 2로 나눈 나머지를 출력
    }
}

int main(void)
{
    int num = 0;
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);

    recursion(num);
    printf("\n");

    return 0;
}