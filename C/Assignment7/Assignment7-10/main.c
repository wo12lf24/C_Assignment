/*
Assignment7-10
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

void main(void)
{
    char *token;
    char string[100];
    char strnum[100] = {0};

    strcpy(string, "(111)-(222)-(333)");
    token = strtok(string, "()-");

    while (token)
    {
        puts(token);
        strcat(strnum, token);

        token = strtok(NULL, "()-");
    }
    puts(strnum);
}