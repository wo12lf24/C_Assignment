/*
Assignment4-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

void StrCpy(char string[100], char *copy) // strcpy�� ���� �Լ��Դϴ�.
{
    int i = 0;
    while (i != 100)
    {
        string[i] = copy[i];
        i++;
    }
}

void main(void)
{
    char string[100];

    strcpy(string, "C ��� �������");
    puts(string);

    StrCpy(string, "������ȭ��");
    puts(string);
}