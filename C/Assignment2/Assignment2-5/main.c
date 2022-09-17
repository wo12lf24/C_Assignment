#include <stdio.h>

void ASC(int *arr[10])
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
void DESC(int *arr[10])
{
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (arr[i+1] > arr[i])
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
    printf("정렬 방법을 선택하세요.\n");
    printf("1.ASC 2.DESC : ");
    int select;
    scanf("%d", &select);

    printf("10개의 정수를 입력하세요.\n");
    int arr[10];
    int num;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    if (select == 1)
    {
        ASC(&arr);
        printf("ASC SORT : { ");
        for (int i = 0; i < 10; i++)
        {
            if (i != 9)
            {
                printf("%d, ", arr[i]);
            }
            else
            {
                printf("%d", arr[i]);
            }
        }
        printf(" }\n");
    }
    else if (select == 2)
    {
        DESC(&arr);
        printf("ASC SORT : { ");
        for (int i = 0; i < 10; i++)
        {
            if (i != 9)
            {
                printf("%d, ", arr[i]);
            }
            else
            {
                printf("%d", arr[i]);
            }
        }
        printf(" }\n");
    }

    return 0;
}