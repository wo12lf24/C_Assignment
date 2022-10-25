/*
Assignment4-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *StrLTrim(char *pstring) //글자는 0을 반환
{
    while (*pstring)
    {
        if (!isspace(*pstring))
        {
            return pstring;
        }
        pstring++;
    }
    return (char*)"";
}

void main(void)
{
    char string[100];
    char *pstr;

    strcpy(string, "\n\t    abcde");
    pstr = StrLTrim(string);
    puts(pstr);
}