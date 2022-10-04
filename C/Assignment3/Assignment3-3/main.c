/*
Assignment3-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void arr_print(int arr[4][4])       // 행렬을 출력하는 함수입니다.
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
void ch(int arr[4][4])          // 행렬의 행과 열을 바꿔서 출력하는 함수입니다.
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
    printf("[변경 전]\n");
    arr_print(arr);
    printf("[변경 전]\n");
    ch(arr);
    return 0;
}