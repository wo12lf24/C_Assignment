/*
Assignment12-3
학번:2019202003
이름:김주형
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
        printf("명령어 입력(+,-,*) :");
        scanf("%c", &cmd);
        getc(stdin);
        if (cmd == '+')
        {
            if (top == max)
            {
                printf("%s\n", stack);
                printf("종료되었습니다.\n");
                return;
            }
            int n;
            printf("정수 입력 : ");
            scanf("%d", &n);
            getc(stdin);
            stack[top++] = n + '0';
        }
        else if (cmd == '-')
        {
            printf("정수 제거 및 출력 : %c\n", stack[top - 1]);
            stack[top--] = NULL;
        }
        else if (cmd == '*')
        {
            printf("종료되었습니다.\n");
            return;
        }
        else
        {
            printf("ERROR!\n");
        }
    }
    printf("출력 : %s\n", &stack);
}