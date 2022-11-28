/*
Assignment9-12
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LENGTH 64

char *gets_f(char *buffer)
{
    int i = 0;

    for (i = 0; i < MAX_LENGTH - 1; i++)
    {
        buffer[i] = fgetc(stdin);
        if (buffer[i] == '\n')
            break;
    }
    buffer[i] = 0;

    return buffer;
}

int puts_f(const char *string)
{
    for (int i = 0; i < MAX_LENGTH - 1; i++)
    {
        fputc(string[i], stdout);
        if (string[i] == 0)
            break;
    }
    printf("\n");
    return 0;
}

int main()
{
    char str[MAX_LENGTH];

    gets_f(str);
    puts_f(str);

    return 0;
}