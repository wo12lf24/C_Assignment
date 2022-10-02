/*
Assignment3-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>
//*((*ppnum)+i) -> *(arr + i)
void Max(int **ppnum)
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
    printf("최대값 : %d\n", max);
}

int main(void)
{
    int **ppnum;
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