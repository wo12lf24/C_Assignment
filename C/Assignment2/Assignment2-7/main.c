/*
Assignment2-7
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void copy(int A[], int B[]) //�迭A[]�� �ٸ� ���� �迭B[]�� �����ϴ� �Լ��Դϴ�.
{
    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i];
    }
}

int main(void)
{
    int A[5] = {5, 19, 27, 21, 34};
    int B[5];
    int num;
    printf("A�迭�� ��\n ");
    for (int i = 0; i < 5; i++) //�迭 A�� �ִ� ���ҵ��� ����մϴ�.
    {
        printf(" %d", A[i]);
    }
    copy(A, B);

    printf("\nB�迭�� ��\n ");
    for (int i = 0; i < 5; i++) //�迭 B�� �ִ� ���ҵ��� ����մϴ�.
    {
        printf(" %d", B[i]);
    }
    return 0;
}