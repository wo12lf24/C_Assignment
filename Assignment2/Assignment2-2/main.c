#include <stdio.h>

void recursion(int num)
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
    printf("���� �ϳ� �Է� : ");
    scanf("%d", &num);

    printf("�Է¹��� ���� %d�� 2���� : ", num);
    recursion(num);
    printf("\n");

    return 0;
}