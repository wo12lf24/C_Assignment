/*
Assignment4-4
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

char* StrChr(char string[100], char alphabet)   //strchr�� ���� �Լ��Դϴ�.
{
    int i = 0;
    while (i != 100)
    {
        if (string[i] == alphabet)
        {
            return (string + i);
        }
        i++;
    }
}
void main(void)
{
    char string[100];
    char *pos;

    strcpy(string, "This is a book.");
    pos = strchr(string, 'a');
    printf("%d ��ġ�� a�� ���� \n", pos - string);

    strcpy(string, "This is a book.");
    pos = StrChr(string, 'a');
    printf("%d ��ġ�� a�� ���� \n", pos - string);
}