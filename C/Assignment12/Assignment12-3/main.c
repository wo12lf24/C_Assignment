/*
Assignment12-3
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#define max 5

char stack[max];
int top = 0;
void main()
{
    char cmd;
    while (1)
    {
        printf("��ɾ� �Է�(+,-,*) :");
        scanf("%c", &cmd);
        getc(stdin);
        if (cmd == '+')
        {
            if (top == max)
            {
                printf("%s\n", stack);
                printf("����Ǿ����ϴ�.\n");
                return;
            }
            int n;
            printf("���� �Է� : ");
            scanf("%d", &n);
            getc(stdin);
            stack[top++] = n + '0';
        }
        else if (cmd == '-')
        {
            printf("���� ���� �� ��� : %c\n", stack[top - 1]);
            stack[top--] = NULL;
        }
        else if (cmd == '*')
        {
            printf("����Ǿ����ϴ�.\n");
            return;
        }
        else
        {
            printf("ERROR!\n");
        }
    }
    printf("��� : %s\n", &stack);
}