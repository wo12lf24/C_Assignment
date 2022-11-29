/*
Assignment12-1
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#define max 100

char stack[max];
int top=0;
void main()
{
    printf("입력 :");
    char str[100]={NULL,};

    scanf("%[^\n]s",str);
    for(int i=99;i>=0;i--)
    {
        if(str[i]==NULL) continue;
        stack[top++]=str[i];
    }
    printf("출력 : %s\n", &stack);
}