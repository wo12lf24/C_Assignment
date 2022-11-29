/*
Assignment10-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

void plus_one(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += 1;
    }
}

int main(void)
{
    int *arr;
    int n;
    printf("배열의 길이 입력: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("배열의 값 입력: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    plus_one(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}