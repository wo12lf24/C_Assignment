/*
Assignment12-15
�й�:2019202003
�̸�:������
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
        printf("ȸ���� �½��ϴ�.\n");
    else
        printf("ȸ���� �ƴմϴ�.\n");
    return 0;
}