/*
Assignment3-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void print(int arr[4][5]) // 1부터 20까지 한 줄씩 저장하고 출력하는 함수입니다.
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