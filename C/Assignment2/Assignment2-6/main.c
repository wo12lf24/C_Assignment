/*
Assignment2-6
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void ab(int *a, int *b)
{
    int temp = *a;    // temp에 저장하는 이유는
    *a = (*a) + (*b); // 11줄에서 a의 값이 변경되기 때문입니다.
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
        printf("두 정수의 차 : %d\n", (-1) * b); // a-b가아닌 두 수의 차는 음수가 될 수 없습니다.
    }
    else
    {
        printf("두 정수의 차 : %d\n", b);
    }

    return 0;
}