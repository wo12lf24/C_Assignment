/*
Assignment3-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void fill_2d_array(int arr[][5], int num)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = num;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int num;
    int arr[4][5];
    printf("�迭�� ���ҿ� ������ ��? ");
    scanf("%d", &num);       //���ҿ� ������ ���� �Է¹޾�
    fill_2d_array(arr, num); //�迭�� ��� ���ҿ� �� ���� �����մϴ�.

    return 0;
}