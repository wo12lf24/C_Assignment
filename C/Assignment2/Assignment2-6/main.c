/*
Assignment2-6
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void ab(int *a, int *b)
{
    int temp = *a;    // temp�� �����ϴ� ������
    *a = (*a) + (*b); // 11�ٿ��� a�� ���� ����Ǳ� �����Դϴ�.
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
        printf("�� ������ �� : %d\n", (-1) * b); // a-b���ƴ� �� ���� ���� ������ �� �� �����ϴ�.
    }
    else
    {
        printf("�� ������ �� : %d\n", b);
    }

    return 0;
}