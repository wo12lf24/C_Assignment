/*
Assignment2-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int arr[10];
    int num;
    printf("10���� ���� �Է�\n");
    for (int i = 0; i < 10; i++) // 10���� ������ �迭 arr�� ���� �ֽ��ϴ�.
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0) // 2�� ���� �������� 0�� �ƴϸ� Ȧ�� �Դϴ�.
        {
            printf("Ȧ�� ��� : %d,", arr[i]); //Ȧ�� �϶��� ����մϴ�.
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0) // 2�� ���� �������� 0�̸� ¦�� �Դϴ�.
        {
            printf("¦�� ��� : %d,", arr[i]); //¦�� �϶��� ����մϴ�.
        }
    }
    printf("\n");

    return 0;
}