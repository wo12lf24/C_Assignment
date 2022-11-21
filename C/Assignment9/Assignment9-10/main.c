#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE*fw=fopen("C_Assignment\\C\\Assignment9\\Assignment9-10\\story.txt", "r");
    char str[100];
    int max=0;
    int total =0;
    char max_str[100] = {0};

    while(fscanf(fw,"%s", str)!=EOF)
    {
        char*ptr = strtok(str, " ");

        while(ptr!=NULL)
        {
            if(strlen(ptr)>=max)
            {
                strcpy(max_str,ptr);
                max=strlen(ptr);
            }

            total +=strlen(ptr);
            ptr=strtok(NULL, " ");
        }
    }

    printf("문장 길이 : %d, 제일 긴 단어 : %s \n", total, max_str);

    return 0;
}