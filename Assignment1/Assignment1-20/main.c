#include <stdio.h>

int main(void)
{
    printf("������ �Է��ϼ��� : ");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}