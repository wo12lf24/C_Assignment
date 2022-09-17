#include <stdio.h>

void ab(int *a, int *b)
{
    int temp = *a;
    *a = (*a) + (*b);
    *b = (*b) - temp;
}

int main(void)
{
    int a, b;
    printf("a, b를 입력하시오");
    scanf("%d %d", &a, &b);
    ab(&a, &b);
    printf("두 정수의 합 : %d\n", a);
    if (b < 0)
    {
        printf("두 정수의 차 : %d\n", (-1) * b);
    }
    else
    {
        printf("두 정수의 차 : %d\n", b);
    }

    return 0;
}