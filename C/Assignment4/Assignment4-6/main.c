/*
Assignment4-6
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StrUpr(char string[100]) //소문자를 대문자로
{                             //바꾸는 함수
    int len = 0;
    while (string[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        if ('a' <= string[i] && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
    }
}
void main(void)
{
    char string[100];

    strcpy(string, "beautiful girl.");
    StrUpr(string);
    puts(string);
}