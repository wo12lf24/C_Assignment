#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[10];
    int count = 0;
    printf("단어를 입력하세요 : ");
    scanf("%s", &word);
    int length = strlen(word);

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] == word[length - i - 1])
        {
            count++;
        }
    }
    if ((length / 2) == count++)
    {
        printf("회문입니다.\n");
    }
    else
    {
        printf("회문이 아닙니다.\n");
    }

    return 0;
}