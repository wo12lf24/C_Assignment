/*
Assignment3-9
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <cstring>

int main(void)
{
    char word[10][20];
    char find[20];
    int i;
    for (i = 0; i < 10; i++) //�ܾ �Է¹ް� �� ��� �ܾ �ԷµǾ����� �˷��ݴϴ�.
    {
        printf("�ܾ� �Է� : ");
        scanf("%s", &word[i]);
        if (strcmp(word[i], "end") == 0)
        {
            printf("# �� %d���� �ܾ �ԷµǾ����ϴ�!\n\n", i);
            break;
        }
    }

    while (strcmp(find, "end") != 0) //�ܾ �˻��մϴ�.
    {
        printf("�˻� �ܾ� (����� end�Է�) : ");
        scanf("%s", &find);
        for (int j = 0; j < i; j++)
        {
            if (strcmp(word[j], find) == 0)
            {
                printf("# %d��° ���� �ܾ �ֽ��ϴ�!\n\n", j + 1);
            }
        }
    }
    printf("����Ǿ����ϴ�.\n");

    return 0;
}