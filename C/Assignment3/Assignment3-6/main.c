/*
Assignment3-6
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int arr20[1][4];
    int arr30[1][2];
    int arr40[1][3];
    int num;
    printf("20대 연령의 윗몸 일으키키 횟수\n"); // 20대 연령 4명의 윗몸일으키키 횟수
    for (int i = 0; i < 4; i++)
    {
        printf("%dth : ", i + 1);
        scanf("%d", &num);
        arr20[0][i] = num;
    }
    printf("\n30대 연령의 윗몸 일으키키 횟수\n"); // 30대 연령 4명의 윗몸일으키키 횟수
    for (int i = 0; i < 2; i++)
    {
        printf("%dth : ", i + 1);
        scanf("%d", &num);
        arr30[0][i] = num;
    }
    printf("\n40대 연령의 윗몸 일으키키 횟수\n"); // 40대 연령 4명의 윗몸일으키키 횟수
    for (int i = 0; i < 3; i++)
    {
        printf("%dth : ", i + 1);
        scanf("%d", &num);
        arr40[0][i] = num;
    }
    printf("\n\n연령별 평균 윗몸 일으키키 횟수\n");
    printf("20대 : %.2f", float(arr20[0][0] + arr20[0][1] + arr20[0][2] + arr20[0][3]) / 4);
    printf("\n30대 : %.2f", float(arr30[0][0] + arr30[0][1]) / 2);
    printf("\n40대 : %.2f\n", float(arr40[0][0] + arr40[0][1] + arr40[0][2]) / 3);

    return 0;
}