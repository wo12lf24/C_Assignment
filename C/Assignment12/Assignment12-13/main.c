/*
Assignment12-13
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int arr[100005];

    int top = 0;
    while (top != 10)
    {
        int n;
        scanf("%d", &n);
        arr[top++] = n;
    }
    int max = 0;
    while (top--)
    {
        max = max < arr[top] ? arr[top] : max;
    }
    printf("�ִ� : %d", max);
    return 0;
}