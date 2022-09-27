/*
Assignment2-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>

void ASC(int arr[]) //오름차순으로 정렬하는 함수입니다.
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
void DESC(int arr[]) //내림차순으로 정렬하는 함수입니다.
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
    printf("정렬 방법을 선택하세요.\n");
    printf("1.ASC 2.DESC : ");
    int select;
    scanf("%d", &select);

    printf("\n10개의 정수를 입력하세요.\n");
    int arr[10];
    int num;
    for (int i = 0; i < 10; i++) // 10개의 정수를 입력받아 배열 arr에 저장합니다.
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    if (select == 1) // 1을 고르면 오름차순
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
                printf("%d", arr[i]); //마지막은 쉼표가 없어서 따로해주었습니다.
            }
        }
        printf(" }\n");
    }
    else if (select == 2) // 2를 고르면 내림차순
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
                printf("%d", arr[i]); //마지막은 쉼표가 없어서 따로해주었습니다.
            }
        }
        printf(" }\n");
    }

    return 0;
}