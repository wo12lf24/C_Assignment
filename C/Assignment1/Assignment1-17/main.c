/*
Assignment1-17
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int num;
    printf("���ڸ� ���� �Է��ϼ��� : ");
    scanf("%d", &num);                       //�� �ڸ��� ���� �Է¹޾�
    printf("1�� �ڸ� �� : %d\n", num % 10);  // 10���� ���� �������� 1���ڸ��� ��
    printf("10�� �ڸ� �� : %d\n", num / 10); //�� ���� 10�� �ڸ��� �� �Դϴ�.

    return 0;
}