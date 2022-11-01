/*
Assignment7-1
학번:2019202003
이름:김주형
*/
#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
    int second;
    printf("초 (second) 입력 : ");
    scanf("%d", &second);
    int hour = second / 3600;                 // 3600초는 1시간
    int minute = (second - hour * 3600) / 60; // second - hour * 3600 = minute
    second = second - hour * 3600 - minute * 60;
    printf("[h:%d, m:%d, s:%d]", hour, minute, second);

    return 0;
}