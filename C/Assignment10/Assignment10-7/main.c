/*
Assignment10-7
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <stdlib.h>

void plus_one(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += 1;
    }
}

int main(void)
{
    int *arr;
    int n;
    printf("�迭�� ���� �Է�: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("�迭�� �� �Է�: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    plus_one(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}