#include <stdio.h>

void recursion(int num)     //��͸� �̿��ؼ� 10������ 2������ ǥ��.
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
    printf("���ڸ� �Է����ּ��� : ");
    scanf("%d", &num);

    recursion(num);
    printf("\n");

    return 0;
}