#include <stdio.h>

int main(void)
{
    int A[5];
    int B[5];
    int num;
    printf("A배열의 값\n  ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("B배열의 값\n ");
    for (int i = 0; i < 5; i++)
    {
        B[i]=A[i];
        printf(" %d", B[i]);
    }

    return 0;
}