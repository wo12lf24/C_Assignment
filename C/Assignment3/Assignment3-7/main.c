/*
Assignment3-7
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void print(int arr[4][5]) // 1���� 20���� �� �پ� �����ϰ� ����ϴ� �Լ��Դϴ�.
{
    int num = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = ++num;
        }
        for (int j = 0; j < 5; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int arr[4][5];
    print(arr);

    return 0;
}