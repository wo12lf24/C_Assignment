#include <stdio.h>

int main(void)
{
    int num = 0;

    for (int i = 1; i <= 10; i++) // 1���� 10���� ���ϴ� ���� ����ϰ�
    {
        if (num != 0)
        {
            printf("(");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            num += j;       // �� ���� ��� ���մϴ�.
            if (j != i)
            {
                printf(" + ");
            }
        }
        if (num > 1)
        {
            printf(")");
        }
        if (i != 10)
        {
            printf(" + ");
        }
    }
    printf(" = %d\n", num);
    return 0;
}