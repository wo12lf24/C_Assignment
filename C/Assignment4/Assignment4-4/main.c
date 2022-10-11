/*
Assignment4-4
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

char* StrChr(char string[100], char alphabet)   //strchr를 만든 함수입니다.
{
    int i = 0;
    while (i != 100)
    {
        if (string[i] == alphabet)
        {
            return (string + i);
        }
        i++;
    }
}
void main(void)
{
    char string[100];
    char *pos;

    strcpy(string, "This is a book.");
    pos = strchr(string, 'a');
    printf("%d 위치에 a가 있음 \n", pos - string);

    strcpy(string, "This is a book.");
    pos = StrChr(string, 'a');
    printf("%d 위치에 a가 있음 \n", pos - string);
}