/*
Assignment7-2
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    printf("�� 10���� ���� �Է�\n");
    int arr[10];
    int num;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("�Է�: ");
        scanf("%d", &num);
        if (num % 2 == 0) // num�� ¦�����
        {
            arr[9 - count] = num; // �迭 arr�� ���������� ���ڸ��� ä���ֽ��ϴ�.
            count++;
        }
        else // num�� Ȧ�����
        {
            arr[i - count] = num; // �迭 arr�� ���ڸ������� ���ڸ��� ä���ֽ��ϴ�.
        }
    }
    printf("�迭 ����� ��� : ");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d ", arr[i]); //�������� ��ǥ�� ��� ���� ���־����ϴ�.
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    return 0;
}