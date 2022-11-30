/*
Assignment12-15
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char arr[100005];

    char input[100001];

    int top = 0;
    scanf("%s", input);

    int i = 0;
    while (input[i])
    {
        arr[top++] = input[i++];
    }
    i = 0;
    int status = 0;
    while (top--)
    {
        if (arr[top] != input[i++])
        {
            status = 1;
            break;
        }
    }
    if (!status)
        printf("회문이 맞습니다.\n");
    else
        printf("회문이 아닙니다.\n");
    return 0;
}