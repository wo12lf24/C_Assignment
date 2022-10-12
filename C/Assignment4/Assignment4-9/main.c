/*
Assignment4-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    char word[100];
    printf("문장 입력 : ");
    scanf("%s", &string);
    char *temp = strtok(string, " ");
    while (temp != NULL)
    {
        printf("%s\n", temp);
        temp = strtok(NULL, " ");
    }
    printf("검색할 문자열 입력 (종료는 end) : ");
    scanf("%s", &word);

    return 0;
}