#include <stdio.h>

int main(void)
{
    int arr[10];
    int num;
    printf("10개의 정수 입력\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("홀수 출력 : %d,", arr[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("짝수 출력 : %d,", arr[i]);
        }
    }
    printf("\n");

    return 0;
}