/*
Assignment4-10
�й�:2019202003
�̸�:������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StrReplace(char string[100], char c1, char c2) // strreplace�� ���� �Լ��Դϴ�.
{
    int i = 0;
    while (i != 100) // string�� i��° c1�̶�� c2�� �ٲپ� �ݴϴ�.
    {
        if (string[i] == c1)
        {
            string[i] = c2;
        }
        i++;
    }
}

void main(void)
{
    char string[100];

    strcpy(string, "It is a good time!");
    StrReplace(string, 'i', 'I');
    puts(string);
}