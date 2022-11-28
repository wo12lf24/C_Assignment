/*
Assignment9-9
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE*fw=fopen("C_Assignment\\C\\Assignment9\\Assignment9-9\\story.txt", "r");
    char str[100];

    while(fscanf(fw, "%s", str)!=EOF)
    {
        char*ptr=strtok(str, " ");
        while(ptr!=NULL)
        {
            printf("%s\n",ptr);
            ptr=strtok(NULL, " ");
        }
    }
    return 0;
}