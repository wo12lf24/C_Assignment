#include <stdio.h>

int main(void)
{
    printf("정수를 입력하세요 : ");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}