/*
Assignment2-5
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

void ASC(int arr[]) //������������ �����ϴ� �Լ��Դϴ�.
{
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
void DESC(int arr[]) //������������ �����ϴ� �Լ��Դϴ�.
{
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main(void)
{
    printf("���� ����� �����ϼ���.\n");
    printf("1.ASC 2.DESC : ");
    int select;
    scanf("%d", &select);

    printf("\n10���� ������ �Է��ϼ���.\n");
    int arr[10];
    int num;
    for (int i = 0; i < 10; i++) // 10���� ������ �Է¹޾� �迭 arr�� �����մϴ�.
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    if (select == 1) // 1�� ���� ��������
    {
        ASC(arr);
        printf("\nASC SORT : { ");
        for (int i = 0; i < 10; i++)
        {
            if (i != 9)
            {
                printf("%d, ", arr[i]);
            }
            else
            {
                printf("%d", arr[i]); //�������� ��ǥ�� ��� �������־����ϴ�.
            }
        }
        printf(" }\n");
    }
    else if (select == 2) // 2�� ���� ��������
    {
        DESC(arr);
        printf("\nDESC SORT : { ");
        for (int i = 0; i < 10; i++)
        {
            if (i != 9)
            {
                printf("%d, ", arr[i]);
            }
            else
            {
                printf("%d", arr[i]); //�������� ��ǥ�� ��� �������־����ϴ�.
            }
        }
        printf(" }\n");
    }

    return 0;
}