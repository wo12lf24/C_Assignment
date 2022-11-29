/*
Assignment12-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[100001];
int top = 0;

int main()
{
    char n[100001];
    scanf("%[^\n]s", n);
    char *str;
    str = strtok(n, " ");
    while (str)
    {
        int i = strlen(str);
        while (i--)
        {
            stack[top++] = str[i];
        }
        printf("%s ", stack);
        memset(stack, NULL, sizeof(stack) * sizeof(char));
        top = 0;
        str = strtok(NULL, "\n");
    }
    return 0;
}