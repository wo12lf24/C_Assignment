/*
Assignment4-6
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

void StrUpr(char string[100])
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if ('a' <= string[j] || string[j] <= 'z')
        {
            string[j] = string[j] - 32;
        }
    }
}
void main(void)
{
    char string[100];

    strcpy(string, "beautiful girl.");
    puts(string);
    StrUpr(string);
    puts(string);
}