#include <stdio.h>

int sum(int arr[5])
{
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        num += arr[i];
    }

    return num;
}

int main(void)
{
    int A[5] = {200, 300, 400, 500, 600};
    printf("직원들의 월급의 합 : %d\n", sum(A));

    return 0;
}