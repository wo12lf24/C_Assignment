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
    if(count==0)
    {
        printf("소수입니다.\n");
    }
    else
    {
        printf("소수가 아닙니다.\n");
    }

    return 0;
}