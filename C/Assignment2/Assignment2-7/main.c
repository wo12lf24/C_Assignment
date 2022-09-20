/*
Assignment2-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void copy(int A[], int B[]) //배열A[]를 다른 정수 배열B[]에 복사하는 함수입니다.
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
    printf("A배열의 값\n ");
    for (int i = 0; i < 5; i++) //배열 A에 있는 원소들을 출력합니다.
    {
        printf(" %d", A[i]);
    }
    copy(A, B);

    printf("\nB배열의 값\n ");
    for (int i = 0; i < 5; i++) //배열 B에 있는 원소들을 출력합니다.
    {
        printf(" %d", B[i]);
    }
    return 0;
}