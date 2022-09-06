#include <stdio.h>

int recursion(int num1, int num2)
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

    printf("최소공배수 : ");
    printf("%d\n", (num1 / recursion(num1, num2)) * num2);

    return 0;
}