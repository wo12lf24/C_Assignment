#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}