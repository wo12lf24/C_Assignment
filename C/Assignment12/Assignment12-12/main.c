/*
Assignment12-12
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char temp[100][100001];
int main(void)
{
    char arr[100005];

    char input[100001];

    int top = 0;
    scanf("%s", input);

    int idx = 0;
    int top2 = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '(')
        {
            char tt[100001];
            int a = 0;
            for (; input[i] != ')'; i++)
            {
                tt[a] = input[i];
                a++;
            }
            tt[a] = ')';
            for (int k = 0; k < strlen(tt); k++)
            {
                temp[top2][k] = tt[k];
            }
            arr[top++] = '*';

            top2++;
        }
        else
        {
            arr[top++] = input[i];
        }
    }
    while (top--)
    {
        if (arr[top] == '*')
        {
            top2--;
            for (int i = 0; temp[top2][i] != -52; i++)
            {
                printf("%c", temp[top2][i]);
            }
        }
        else
        {
            printf("%c", arr[top]);
        }
    }
}