/*
Assignment2-10
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    double arr[3] = {0, 1, 2};

    for (int i = 0; i < 3; i++)     // arr[i] �ּ� ���� ����մϴ�.
    {
        printf("arr[%d]�� �ּ�: %d\n", i, (arr + i));
    }

    return 0;
}