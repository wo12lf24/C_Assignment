/*
Assignment1-4
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int recursion(int num1, int num2) //��͸� �̿��ؼ� �� ���� �ִ������� ����.
{
    if (num2 == 0) // num2�� 0�̶�� ���� �������� 0�̶�� ��.
        return num1;
    else
        return recursion(num2, (num1 % num2)); // num1�� num2�� ���� �������� num2�� �ٽ� recursion �Լ��� ����
}

int main(void)
{
    int num1, num2;
    printf("�� ���� ������ �Է����ּ��� : ");
    scanf("%d,%d", &num1, &num2);

    printf("�ּҰ���� : ");                               //�� ���� �� ���� �ִ������� ������
    printf("%d\n", (num1 / recursion(num1, num2)) * num2); //������ ���� �ٸ� ���� ���ϸ� �ּҰ����

    return 0;
}