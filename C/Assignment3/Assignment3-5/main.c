/*
Assignment3-5
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
//*((*ppnum)+i) -> *(arr + i)
void Max(int **ppnum) // �Էµ� ���� �ִ밪�� ����ϴ� �Լ��Դϴ�.
{
    int max = **ppnum;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*((*ppnum) + j) > max)
            {
                max = *((*ppnum) + j);
            }
        }
    }
    printf("�ִ밪 : %d\n", max);
}

int main(void)
{
    int **ppnum;    //2�������Ϳ� ũ�Ⱑ 5�� �迭 ����
    int num;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    *ppnum = arr;

    Max(ppnum);

    return 0;
}