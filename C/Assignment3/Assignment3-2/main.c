/*
Assignment3-2
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void add_matrix(int arr1[3][3], int arr2[3][3])
{
    printf("x+y 행렬:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}
void arr_print(int arr[3][3])
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

int main(void)
{
    int x_arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    printf("x 행렬:\n");
    arr_print(x_arr);
    int y_arr[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("y 행렬:\n");
    arr_print(y_arr);
    add_matrix(x_arr, y_arr);

    return 0;
}