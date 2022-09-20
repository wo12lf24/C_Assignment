/*
Assignment2-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void cal(int A[], int B[], int C[])
{
    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] + B[i];
        printf("직원%d  %d\n", i + 1, C[i]);
    }
}

int main(void)
{
    int A[5] = {200, 300, 400, 500, 600};
    int B[5] = {30, 60, 90, 120, 150};
    int C[5];

    printf("[각 직원들의 지급받을 월급 총액]\n");
    cal(A, B, C);

    return 0;
}