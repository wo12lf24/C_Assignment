/*
Assignment12-6
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

char stack[51];
int top = 0;

int main()
{
    int n;
    printf("�Է��� ������ ���� : ");
    scanf("%d", &n);
    int num;

    while (n--)
    {
        printf("���� : ");
        scanf("%d", &num);
        if (num < 10 && num % 2 == 0)
            stack[top++] = num + '0';
    }
    printf("{");

    while (top--)
    {
        printf("%c", stack[top]);
        if (top)
            printf(",");
    }
    printf("}\n");
    return 0;
}