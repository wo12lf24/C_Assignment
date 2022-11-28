/*
Assignment9-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    FILE *fr=fopen("C:\\Users\\wo12l\\VSCODE\\C_Assignment\\C\\Assignment9\\Assignment9-3\\mystery.txt","r");
    char str[100];
    for(int i =0;i<5;i++)
    {
        fgets(str, sizeof(str), fr);
        printf("%s", str);
    }
    fclose(fr);
    return 0;
}