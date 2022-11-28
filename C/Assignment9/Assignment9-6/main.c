/*
Assignment9-6
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *fr = fopen("C_Assignment\\C\\Assignment9\\Assignment9-6\\readme.txt", "r");
    FILE *fw = fopen("C_Assignment\\C\\Assignment9\\Assignment9-6\\readyou.txt", "w");

    char str[100];

    while (fgets(str, sizeof(str), fr) != 0)
    {
        for (int j = 0; j < 100; j++)
            if (str[j] >= 'A' && str[j] <= 'Z') str[j] += 32;

        printf("%s", str);
        fputs(str, fw);
    }
    fclose(fw);
    fclose(fr);
}