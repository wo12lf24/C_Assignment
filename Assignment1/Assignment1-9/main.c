#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++)      // �� ���� �Է¹޾� �� ���̿� �ִ� ���ڵ��� ����մϴ�.
    {
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}