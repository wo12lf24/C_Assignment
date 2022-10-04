/*
Assignment3-1
학번:2019202003
이름:김주형
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
    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &num);       //원소에 저장할 값을 입력받아
    fill_2d_array(arr, num); //배열의 모든 원소에 그 값을 저장합니다.

    return 0;
}