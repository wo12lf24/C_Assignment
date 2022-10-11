/*
Assignment4-1
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

void StrCpy(char string[100], char *copy) // strcpy를 만든 함수입니다.
{
    int i = 0;
    while (i != 100)
    {
        string[i] = copy[i];
        i++;
    }
}

void main(void)
{
    char string[100];

    strcpy(string, "C 언어 길라잡이");
    puts(string);

    StrCpy(string, "정보문화사");
    puts(string);
}