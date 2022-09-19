/*
Assignment1-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int recursion(int num1, int num2) //재귀를 이용해서 두 수의 최대공약수를 구함.
{
    if (num2 == 0) // num2가 0이라는 뜻은 나머지가 0이라는 뜻.
        return num1;
    else
        return recursion(num2, (num1 % num2)); // num1을 num2로 나눈 나머지를 num2와 다시 recursion 함수에 대입
}

int main(void)
{
    int num1, num2;
    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d,%d", &num1, &num2);

    printf("최대공약수 : ");
    printf("%d\n", recursion(num1, num2));

    return 0;
}