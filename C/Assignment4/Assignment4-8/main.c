/*
Assignment4-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *StrRTrim(char *pstring)
{
    char *start = pstring;
    while (*pstring)
    {
        pstring++;
    }
    pstring--;

    while (start <= pstring)
    {
        if (!isspace(*pstring))
        {
            *++pstring = '\0';
            return start;
        }
        pstring--;
    }
    return (char *)"";
}

void main(void)
{
    char string[100];
    char *pstr;

    strcpy(string, "abcde \t\n ");
    pstr = StrRTrim(string);
    printf("%s \n", pstr);
}