/*
Assignment3-8
�й�:2019202003
�̸�:������
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
    printf("5���� ���� �̸� �Է� : ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 20; j++) // fruit �ʱ�ȭ
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
    printf("���̰� ���� �� ���� �̸��� %s�Դϴ�.\n", copy);
    return 0;
}