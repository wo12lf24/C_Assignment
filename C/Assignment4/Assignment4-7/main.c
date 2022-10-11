/*
Assignment4-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *StrLTrim(char string[100]) //글자는 0을 반환
{
    for (int i = 0; i < 100; i++)
    {
        if (string[i] == ' ')
        {
            for (int j = i; j < 99; j++)
            {
                printf("%c",string[j]);
                string[j] = string[j + 1];
            }
        }
    }
    return string;
}

void main(void)
{
    char string[100];
    char *pstr;

    strcpy(string, "\n\t    abcde");
    pstr = StrLTrim(string);
    puts(pstr);
}