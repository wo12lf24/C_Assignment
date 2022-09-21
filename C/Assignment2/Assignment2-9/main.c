/*
Assignment2-9
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int sum(int* arr)
{
    int num = 0;
    for (int i = 0; i < 5; i++) //배열의 합을 모두 더해줍니다.
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