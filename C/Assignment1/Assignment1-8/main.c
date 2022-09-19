/*
Assignment1-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    char c;

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);
    if (c == 'M' || c == 'm') // 입력받은 문자가 M또는 m이면
    {
        printf("남자\n"); // '남자'를 출력합니다.
    }
    else if (c == 'F' || c == 'f') // 입력받은 문자가 F, f이면
    {
        printf("여자\n"); // '여자'를 출력합니다.
    }
    else
    {
    }

    return 0;
}