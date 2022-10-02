/*
Assignment3-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int len(char fruit[20])
{
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        if (fruit[i] != 0)
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char fruit[20];
    char copy[20];
    for (int j = 0; j < 20; j++)
    {
        copy[j] = '\0';
    }
    int max = 0;
    printf("5개의 과일 이름 입력 : ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 20; j++) // fruit 초기화
        {
            fruit[j] = '\0';
        }
        scanf("%s", &fruit);
        if (len(fruit) > max)
        {
            max = len(fruit);
            for (int j = 0; j < 20; j++)
            {
                copy[j] = fruit[j];
            }
        }
    }
    printf("길이가 가장 긴 과일 이름은 %s입니다.\n", copy);
    return 0;
}