/*
Assignment3-13
학번:2019202003
이름:김주형
*/
#include <stdio.h>

double eva(double *arr) //배열의 평균을 구하는 함수입니다.
{
    float num = 0;
    for (int i = 0; i < 4; i++)
    {
        num += arr[i];
    }
    num = num / 4;
    return num;
}

int main(void)
{
    double ary1[4] = {1.5, 2.3, 7.7, 4.9};
    double ary2[4] = {3.4, 5.2, 4.0, 9.1};
    double ary3[4] = {0.3, 7.2, 8.4, 6.6};
    double *arr[3];
    arr[0] = ary1;
    arr[1] = ary2;
    arr[2] = ary3;
    float frr[3];
    frr[0] = eva(arr[0]);
    frr[1] = eva(arr[1]);
    frr[2] = eva(arr[2]);
    for (int i = 0; i < 3; i++) //배열의 평균중 큰순서대로 정렬합니다.
    {
        for (int j = 0; j < 2; j++)
        {
            if (frr[j] < frr[j + 1])
            {
                float temp = frr[j + 1];
                frr[j + 1] = frr[j];
                frr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++) // 평균이 가장 큰 배열의 모든요소와
    {                           //평균을 출력한는 for문입니다.
        if (frr[0] == eva(arr[0]))
        {
            printf("첫 번째 배열 : ");
            printf("%5.1f", arr[0][i]);
            printf("\n%.1f", frr[0]);
        }
        else if (frr[0] == eva(arr[1]))
        {
            printf("두 번째 배열 : ");
            printf("%5.1f", arr[1][i]);
            printf("\n%.1f", frr[0]);
        }
        else if (frr[0] == eva(arr[2]))
        {
            printf("세 번째 배열 : ");
            for (int j = 0; j < 4; j++)
            {
                printf("%5.1f", arr[2][j]);
            }
            printf("\n평균 : %.1f", frr[0]);
            break;
        }
    }

    return 0;
}