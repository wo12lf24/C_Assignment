/*
Assignment4-2
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

int StrCmp(char *str1, char *str2) // strcmp를 만든 함수입니다.
{
    int i = 0;
    while (i != 100)
    {
        if (str1[i] != str2[i]) //다르면 -1을
        {
            return -1;
        }
        i++;
    }
    return 1; //같으면 1을 반환합니다.
}

void main(void)
{
    int result;

    result = strcmp("abc", "ABC");
    printf("%d \n", result);

    result = StrCmp("abc", "abcde");
    printf("%d \n", result);

    result = StrCmp("World Cup", "world cup");
    printf("%d \n", result);
}