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
    printf("a, b�� �Է��Ͻÿ�");
    scanf("%d %d", &a, &b);
    ab(&a, &b);
    printf("�� ������ �� : %d\n", a);
    if (b < 0)
    {
        printf("�� ������ �� : %d\n", (-1) * b);
    }
    else
    {
        printf("�� ������ �� : %d\n", b);
    }

    return 0;
}