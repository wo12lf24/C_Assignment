/*
Assignment3-3
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void arr_print(int arr[4][4])       // ����� ����ϴ� �Լ��Դϴ�.
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
void ch(int arr[4][4])          // ����� ��� ���� �ٲ㼭 ����ϴ� �Լ��Դϴ�.
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", arr[j][i]);
        }
        printf("\n");
    }
}

int main(void)
{
    int arr[4][4];
    int num;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }
    printf("[���� ��]\n");
    arr_print(arr);
    printf("[���� ��]\n");
    ch(arr);
    return 0;
}