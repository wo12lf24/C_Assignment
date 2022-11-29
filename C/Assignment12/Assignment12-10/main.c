/*
Assignment12-10
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[100005];
    char input[100001];

    int top = 0;
    scanf("%s", input);

    int status = 0;
    int i = 0;
    while (input[i])
    {
        if (input[i] == '(')
        {
            for (int j = top - 1; j >= 0; j--)
            {
                printf("%c", arr[j]);
            }
            top = 0;
            status = 1;
        }
        if (status)
        {
            printf("%c", input[i]);
        }
        else
        {
            arr[top++] = input[i];
        }
        if (input[i] == ')')
        {
            status = 0;
        }
        i++;
    }
    return 0;
}