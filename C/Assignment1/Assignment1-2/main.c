/*
Assignment1-2
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void recursion(int num) //��͸� �̿��ؼ� 10������ 2������ ǥ��.
{
    if (num < 2) // 10������ 2���� ������ �� 10������ ���
    {
        printf("%d", num);
    }
    else // 10������ 2�̻��̸�
    {
        recursion(num / 2);    //�� 10������ 2�� ���� ���� recursion�Լ��� �ٽ� ����
        printf("%d", num % 2); //�׸��� 2�� ���� �������� ���
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