/*
Assignment2-12
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int arr[10] = {11, 22, 33, 44, 55,
                   66, 77, 88, 99, 110};
    int *parr = arr;
    printf("�迭: ");
    for (int i = 0; i < 10; i++) // ������ ������ �̿��ؼ�
    {
        printf("%d ", *(parr + i)); // �������� ����ϰ�
    }
    printf("\n����: ");
    for (int i = 9; i > -1; i--)
    {
        printf("%d ", *(parr + i)); // �������� ����մϴ�.
    }
    printf("\n");
    return 0;
}