#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        printf("%d %% %d = %d\n", num, i, num % i);
        if (num % i == 0)
        {
            count++;
        }
    }
    printf("����� ���� : %d\n", count);

    return 0;
}