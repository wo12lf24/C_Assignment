/*
Assignment1-13
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;
    while (i <= 100) // 100������ �� �߿� Ȧ������ ���մϴ�.
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("Ȧ���� �� : %d\n", sum);
    return 0;
}