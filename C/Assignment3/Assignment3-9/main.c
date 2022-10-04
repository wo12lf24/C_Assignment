/*
Assignment3-9
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <cstring>

int main(void)
{
    char word[10][20];
    char find[20];
    int i;
    for (i = 0; i < 10; i++) //단어를 입력받고 총 몇개의 단어가 입력되었는지 알려줍니다.
    {
        printf("단어 입력 : ");
        scanf("%s", &word[i]);
        if (strcmp(word[i], "end") == 0)
        {
            printf("# 총 %d개의 단어가 입력되었습니다!\n\n", i);
            break;
        }
    }

    while (strcmp(find, "end") != 0) //단어를 검색합니다.
    {
        printf("검색 단어 (종료는 end입력) : ");
        scanf("%s", &find);
        for (int j = 0; j < i; j++)
        {
            if (strcmp(word[j], find) == 0)
            {
                printf("# %d번째 같은 단어가 있습니다!\n\n", j + 1);
            }
        }
    }
    printf("종료되었습니다.\n");

    return 0;
}