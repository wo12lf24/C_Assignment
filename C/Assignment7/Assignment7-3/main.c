/*
Assignment7-3
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[10];
    int count = 0;
    printf("���ڿ� �Է� : ");
    scanf("%s", &word);
    int length = strlen(word); //�Է¹��� �ܾ��� ���̸� ���մϴ�.

    for (int i = 0; i < length / 2; i++) //�� �ݸ�ŭ(Ȧ������ ����)�����մϴ�.
    {
        if (word[i] == word[length - i - 1]) //ȸ������ �ƴ��� Ȯ���ϴ� �۾���.
        {
            count++; // Ȧ�����϶� ��� ���� �翷�� ������ �ǹǷ� Ȧ��, ¦�� �������
        }            // length/2�� ���־����ϴ�.
    }
    if ((length / 2) == count++) // ������ ���ݰ�(Ȧ���� �Ҽ��� ����)�� ���� ȸ��(count)�� ������
    {
        printf("ȸ�� �Դϴ�.\n"); //ȸ���Դϴ�.
    }
    else
    {
        printf("ȸ���� �ƴմϴ�.\n");
    }

    return 0;
}