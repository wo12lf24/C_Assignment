#include <stdio.h>

int main(void)
{
    printf("10���� ������ �Է��ϼ���.\n");
    int arr[10];
    int num;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            arr[9 - count] = num;
            count++;
        }
        else
        {
            arr[i - count] = num;
        }
    }
    printf("��� : { ");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("}\n");
    return 0;
}