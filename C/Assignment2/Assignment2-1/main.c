/*
Assignment2-1
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int arr[10];
    int num;
    printf("10개의 정수 입력\n");
    for (int i = 0; i < 10; i++) // 10개의 정수를 배열 arr에 집어 넣습니다.
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0) // 2로 나눈 나머지가 0이 아니면 홀수 입니다.
        {
            printf("홀수 출력 : %d,", arr[i]); //홀수 일때만 출력합니다.
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0) // 2로 나눈 나머지가 0이면 짝수 입니다.
        {
            printf("짝수 출력 : %d,", arr[i]); //짝수 일때만 출력합니다.
        }
    }
    printf("\n");

    return 0;
}