/*
Assignment12-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#define max 100

char stack[max];
int top=0;
void main()
{
    printf("�Է� :");
    char str[100]={NULL,};

    scanf("%[^\n]s",str);
    for(int i=99;i>=0;i--)
    {
        if(str[i]==NULL) continue;
        stack[top++]=str[i];
    }
    printf("��� : %s\n", &stack);
}