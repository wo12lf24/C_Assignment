/*
Assignment4-12
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void bingbing(char string[100]) //문자열을 회전하여 출력하는 함수입니다.
{
    int len = 0; //한번 실행할 때 마다 오른쪽으로한칸씩밀려납니다.
    int num = 1;
    char temp = NULL;
    while (string[len] != '\0')
    {
        len++;
    }
    for (int i = len - 1; i > -1; i--)
    {
        if (i == len - 1)
        {
            temp = string[len - 1];
        }
        string[i] = string[i - 1];
    }
    string[0] = temp;
}
void main(void)
{
    char string[100] = "String.";
    for (int i = 0; i < 7; i++)
    {
        bingbing(string);
        printf("[%d] %s\n", i, string);
    }
}