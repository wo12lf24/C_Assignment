/*
Assignment1-14
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        printf("%d %% %d = %d\n", num, i, num % i);
        if (num % i == 0) // �������� ������ ����Դϴ�.
        {
            count++;
        }
    }
    printf("����� ���� : %d\n", count); //���ÿ� 1�� �ڱ��ڽ��� ����� ����� �ȵ��־ �����Ͽ����ϴ�.

    return 0;
}