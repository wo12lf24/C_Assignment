#include <stdio.h>

void recursion(int num)
{
    if (num < 2)
    {
        printf("%d", num);
    }
    else
    {
        recursion(num / 2);
        printf("%d", num % 2);
    }
}

int main(void)
{
    int num = 0;
    printf("정수 하나 입력 : ");
    scanf("%d", &num);

    printf("입력받은 정수 %d의 2진수 : ", num);
    recursion(num);
    printf("\n");

    return 0;
}