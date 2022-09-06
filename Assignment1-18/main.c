#include <stdio.h>

int main(void)
{
    printf("정수를 입력하세요");
    int num;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d", (-1) * num);
    }
    else
    {
        printf("%d", num);
    }

    return 0;
}