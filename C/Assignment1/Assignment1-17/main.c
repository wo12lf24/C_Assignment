/*
Assignment1-17
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int num;
    printf("두자리 수를 입력하세요 : ");
    scanf("%d", &num);                       //두 자리의 수를 입력받아
    printf("1의 자리 수 : %d\n", num % 10);  // 10으로 나눈 나머지가 1의자리의 수
    printf("10의 자리 수 : %d\n", num / 10); //그 몫이 10의 자리의 수 입니다.

    return 0;
}