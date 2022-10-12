/*
Assignment4-10
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StrReplace(char string[100], char c1, char c2) // strreplace를 만든 함수입니다.
{
    int i = 0;
    while (i != 100) // string의 i번째 c1이라면 c2로 바꾸어 줍니다.
    {
        if (string[i] == c1)
        {
            string[i] = c2;
        }
        i++;
    }
}

void main(void)
{
    char string[100];

    strcpy(string, "It is a good time!");
    StrReplace(string, 'i', 'I');
    puts(string);
}