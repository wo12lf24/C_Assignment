#include <stdio.h>

int main(void)
{
    char c;

    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%c", &c);
    if (c == 'M' || c == 'm')
    {
        printf("����\n");
    }
    else if(c=='F'||c=='f')
    {
        printf("����\n");
    }
    else
    { }

    return 0;
}  