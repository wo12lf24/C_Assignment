#include <stdio.h>

int main(void)
{
    int num;
    printf("���ڸ� ���� �Է��ϼ��� : ");
    scanf("%d", &num);
    printf("1�� �ڸ� �� : %d\n", num % 10);
    printf("10�� �ڸ� �� : %d\n", num / 10);

    return 0;
}