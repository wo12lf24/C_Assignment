#include <stdio.h>

int main(void)
{
    int arr[10];
    int num;
    printf("10���� ���� �Է�\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("Ȧ�� ��� : %d,", arr[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("¦�� ��� : %d,", arr[i]);
        }
    }
    printf("\n");

    return 0;
}