/*
Assignment3-10
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <math.h>

int eva(int arr[7]) //각 지점의 평균값을 구하는 함수입니다.
{
    float num = 0;
    for (int i = 0; i < 7; i++)
    {
        num += arr[i];
    }
    num = num / 7;
    num = round(num);
    return (int)num;
}

int main(void)
{
    int arr[4];

    int arr1[7] = {70, 45, 100, 92, 150, 81, 90}; //관악점
    arr[0] = eva(arr1);
    int arr2[7] = {88, 92, 77, 30, 52, 55, 66}; //강남점
    arr[1] = eva(arr2);
    int arr3[7] = {50, 90, 88, 75, 77, 49, 72}; //명동점
    arr[2] = eva(arr3);
    int arr4[7] = {120, 92, 80, 150, 130, 105, 113}; //대림점
    arr[3] = eva(arr4);

    for (int i = 0; i < 4; i++) //평균값이 큰순서대로 정렬합니다.
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("실적별 출력...\n");
    for (int i = 0; i < 4; i++) //실적별로 출력하는 for문입니다.
    {
        if (arr[i] == eva(arr1))
        {
            printf("관악점");
            for (int j = 0; j < 7; j++)
            {
                printf("%5d", arr1[j]);
            }
            printf("\n");
        }
        else if (arr[i] == eva(arr2))
        {
            printf("강남점");
            for (int j = 0; j < 7; j++)
            {
                printf("%5d", arr2[j]);
            }
            printf("\n");
        }
        else if (arr[i] == eva(arr3))
        {
            printf("명동점");
            for (int j = 0; j < 7; j++)
            {
                printf("%5d", arr3[j]);
            }
            printf("\n");
        }
        else if (arr[i] == eva(arr4))
        {
            printf("대림점");
            for (int j = 0; j < 7; j++)
            {
                printf("%5d", arr4[j]);
            }
            printf("\n");
        }
    }
    printf("\n지점별 출력...\n"); // 지점별로 출력하는 printf문입니다.
    printf("관악점");
    for (int j = 0; j < 7; j++)
    {
        printf("%5d", arr1[j]);
    }
    printf("\n");
    printf("강남점");
    for (int j = 0; j < 7; j++)
    {
        printf("%5d", arr2[j]);
    }
    printf("\n");
    printf("명동점");
    for (int j = 0; j < 7; j++)
    {
        printf("%5d", arr3[j]);
    }
    printf("\n");
    printf("대림점");
    for (int j = 0; j < 7; j++)
    {
        printf("%5d", arr4[j]);
    }
    printf("\n");
    return 0;
}