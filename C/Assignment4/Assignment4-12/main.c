/*
Assignment4-12
�й�:2019202003
�̸�:������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void bingbing(char string[100]) //���ڿ��� ȸ���Ͽ� ����ϴ� �Լ��Դϴ�.
{
    int len = 0; //�ѹ� ������ �� ���� ������������ĭ���з����ϴ�.
    int num = 1;
    char temp = NULL;
    while (string[len] != '\0')
    {
        len++;
    }
    for (int i = len - 1; i > -1; i--)
    {
        if (i == len - 1)
        {
            temp = string[len - 1];
        }
        string[i] = string[i - 1];
    }
    string[0] = temp;
}
void main(void)
{
    char string[100] = "String.";
    for (int i = 0; i < 7; i++)
    {
        bingbing(string);
        printf("[%d] %s\n", i, string);
    }
}