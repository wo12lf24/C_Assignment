/*
Assignment12-11
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
    while (top--)
    {
        if (arr[top] == '6')
            printf("9");
        else if (arr[top] == '9')
            printf("6");
        else if (arr[top] >= 'a' && arr[top] <= 'z')
        {
            char temp = arr[top] - 32;
            printf("%c", temp);
        }
        else if (arr[top] >= 'A' && arr[top] <= 'Z')
        {
            char temp = arr[top] + 32;
            printf("%c", temp);
        }
        else
            printf("%c", arr[top]);
    }
    return 0;
}