#include <stdio.h>

int main(void)
{
    int A[5] = {200, 300, 400, 500, 600};
    int B[5] = {30, 60, 90, 120, 150};
    int C[5];

    printf("[�� �������� ���޹��� ���� �Ѿ�]\n");
    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] + B[i];
        printf("����%d  %d\n", i + 1, C[i]);
    }

    return 0;
}