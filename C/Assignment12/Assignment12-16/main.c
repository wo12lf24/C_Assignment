/*
Assignment12-16
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

    int i =0;
    char temp='\n';
    while(input[i])
    {
        if(temp!=input[i])
        {
            temp=input[i];
            arr[top++]=input[i];
        }
        i++;
    }
    while(top--)
    {
        printf("%c",arr[top]);
    }
    return 0;
}