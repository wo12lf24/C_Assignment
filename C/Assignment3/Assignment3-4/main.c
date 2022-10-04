/*
Assignment3-4
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void val(int arr[3][3])     //행렬의 값을 입력하는 함수입니다.
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
void arr_print(int arr[3][3])       // 행렬을 출력하느 함수입니다.
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
void mul(int arr1[3][3], int arr2[3][3])        //행렬 곱을 연산하는 함수입니다.
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
    printf("[ 행렬 A ]\n");
    val(A_arr);
    printf("[ 행렬 B ]\n");
    val(B_arr);
    printf("[ 행렬 A ]\n");
    arr_print(A_arr);
    printf("[ 행렬 B ]\n");
    arr_print(B_arr);
    printf("[ 행렬 곱 ]\n");
    mul(A_arr, B_arr);

    return 0;
}