/*
Assignment1-15
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
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0) //����� ������ ���ٸ�
    {
        printf("�Ҽ��Դϴ�.\n"); //�Ҽ��̰�
    }
    else //����� ������ �ִٸ�
    {
        printf("�Ҽ��� �ƴմϴ�.\n"); //�Ҽ��� �ƴմϴ�.
    }

    return 0;
}