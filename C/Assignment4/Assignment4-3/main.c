/*
Assignment4-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

void StrCat(char string[100], char *copy) // strcat를 만든 함수입니다.
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < 100 - i; j++)
    {
        string[j + i] = copy[j];
    }
}

void main(void)
{
    char string[100];

    strcpy(string, "나는 ");
    strcat(string, "프로그래머입니다.");
    puts(string);

    strcpy(string, "나는 ");
    StrCat(string, "프로그래머입니다.");
    puts(string);
}