#include <stdio.h>

int recursion(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        return recursion(num2, (num1 % num2));
}

int main(void)
{
    int num1, num2;
    printf("�� ���� ������ �Է����ּ��� : ");
    scanf("%d %d", &num1, &num2);

    printf("�ִ����� : ");
    printf("%d\n", recursion(num1, num2));

    return 0;
}