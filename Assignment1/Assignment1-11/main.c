#include <stdio.h>

int main(void)
{
    int num = 1;
    int sum = 0;
    while (num != 100)  //100�̸��� �� �߿� ¦���� ���� Ȧ���� ���մϴ�.
    {
        if (num % 2 != 0)   //Ȧ��
        {
            sum -= num++;
        }
        else    //¦��
        {
            sum += num++;
        }
    }
    printf("�� : %d\n", sum);
    return 0;
}