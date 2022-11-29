/*
Assignment10-9
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    int size;

    printf("배열의 사이즈를 입력해주세요: ");
    scanf("%d", &size);

    arr = (int **)malloc(sizeof(int **) * size);
    for (int i = 0; i < size; i++)
    {
        arr[i] = (int *)calloc(size, sizeof(int *));
    }
    int row = 0;
    int col = -1;
    int step = 1;
    int num = 0;
    int len = size;

    while (1)
    {
        for (int i = 0; i < size; i++)
        {
            num += 1;
            col += step;
            arr[row][col] = num;
        }
        size -= 1;
        if (size < 1)
        {
            break;
        }
        for (int i = 0; i < size; i++)
        {
            num += 1;
            row += step;
            arr[row][col] = num;
        }
        step = -step;
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}