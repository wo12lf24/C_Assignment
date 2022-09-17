#include <stdio.h>

int recursion(int num1, int num2)       //재귀를 이용해서 두 수의 최대공약수를 구함.
{
    if (num2 == 0)
        return num1;
    else
        return recursion(num2, (num1 % num2));
}

int main(void)
{
    int num1, num2;
    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);

    printf("최소공배수 : ");            //두 수중 한 수에 최대공약수로 나누고
    printf("%d\n", (num1 / recursion(num1, num2)) * num2);//나눠진 수를 다른 수와 곱하면 최소공배수

    return 0;
}