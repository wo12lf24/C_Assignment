/*
Assignment12-2
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#define max 100

char stack[max];
int top = 0;
void main()
{
    printf("�Է� : ");
    int num;
    scanf("%d", &num);

    while (num)
    {
        stack[top++] = num % 2 + '0';
        num /= 2;
    }
    printf("��� : %s\n", &stack);
}