/*
Assignment4-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

char *StrRev(char string[100]) // StrRev를 만든 함수입니다.
{
    int len = 0, i = 0;
    while (i != 100) //길이를 찾는 while문입니다.
    {
        if (string[i] == '\0')
        {
            len = i;
            break;
        }
        i++;
    }
    char temp;
    for (i = 0; i < len / 2; i++) //뒤집는 for문입니다.
    {
        temp = string[len - i - 1];
        string[len - i - 1] = string[i];
        string[i] = temp;
    }
    return string;
}
void main(void)
{
    char string[100];
    char *pos;

    strcpy(string, "abcde 12345");
    pos = StrRev(string);
    puts(string);
}