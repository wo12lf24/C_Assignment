/*
Assignment4-7
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *StrLTrim(char *pstring) //���ڴ� 0�� ��ȯ
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