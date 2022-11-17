#include <stdio.h>

int main(void)
{
    FILE *fr=fopen("mystery.txt","r");
    char str[100];
    for(int i =0;i<5;i++)
    {
        fgtes(str, sizeof(str), fr);
        printf("%s", str);
    }
    fclose(fr);
    return 0;
}