/*
Assignment1-16
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int num1, num2, temp;
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%d %d", &num1, &num2);
    temp = num2;
    num2 = num1;
    num1 = temp;
    printf("��ȯ �� �� �� : %d %d", num1, num2); //�� ���� �Է¹޾� �� ���� ���� �ٲپ��־����ϴ�.

    return 0;
}