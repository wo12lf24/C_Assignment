/*
Assignment3-4
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void val(int arr[3][3])     //����� ���� �Է��ϴ� �Լ��Դϴ�.
{
    int num;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }
}
void arr_print(int arr[3][3])       // ����� ����ϴ� �Լ��Դϴ�.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}
void mul(int arr1[3][3], int arr2[3][3])        //��� ���� �����ϴ� �Լ��Դϴ�.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int num = 0;
            for (int k = 0; k < 3; k++)
            {
                num += arr1[i][k] * arr2[k][j];
            }
            printf("%5d", num);
        }
        printf("\n");
    }
}

int main(void)
{
    int A_arr[3][3];
    int B_arr[3][3];
    printf("[ ��� A ]\n");
    val(A_arr);
    printf("[ ��� B ]\n");
    val(B_arr);
    printf("[ ��� A ]\n");
    arr_print(A_arr);
    printf("[ ��� B ]\n");
    arr_print(B_arr);
    printf("[ ��� �� ]\n");
    mul(A_arr, B_arr);

    return 0;
}