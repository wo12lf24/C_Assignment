/*
Assignment2-9
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int sum(int* arr)
{
    int num = 0;
    for (int i = 0; i < 5; i++) //�迭�� ���� ��� �����ݴϴ�.
    {
        num += arr[i];
    }

    return num;
}

int main(void)
{
    int A[5] = {200, 300, 400, 500, 600};
    printf("�������� ������ �� : %d\n", sum(A));

    return 0;
}