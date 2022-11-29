/*
Assignment10-1
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int*arr;
    printf("원하는 배열의 길이 입력: ");
    scanf("%d", &n);
    arr=(int*)malloc(sizeof(int)*n);

    printf("n개의 정수 입력: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("입력 받은 정수: ");
    for(int i =0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}