#include <stdio.h>

int main(void)
{
    printf("������ �Է��ϼ���");
    int num;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d", (-1) * num);
    }
    else
    {
        printf("%d", num);
    }

    return 0;
}