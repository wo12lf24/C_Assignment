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
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);

    recursion(num);
    printf("\n");

    return 0;
}