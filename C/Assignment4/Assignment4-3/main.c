/*
Assignment4-3
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

void StrCat(char string[100], char *copy) // strcat�� ���� �Լ��Դϴ�.
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < 100 - i; j++)
    {
        string[j + i] = copy[j];
    }
}

void main(void)
{
    char string[100];

    strcpy(string, "���� ");
    strcat(string, "���α׷����Դϴ�.");
    puts(string);

    strcpy(string, "���� ");
    StrCat(string, "���α׷����Դϴ�.");
    puts(string);
}