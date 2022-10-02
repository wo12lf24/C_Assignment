/*
Assignment3-9
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    char word[10][20];
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", &word);
        printf("%s", word);
    }

    return 0;
}