#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("�Ҽ��Դϴ�.\n");
    }
    else
    {
        printf("�Ҽ��� �ƴմϴ�.\n");
    }

    return 0;
}