/*
Assignment4-5
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

char *StrRev(char string[100]) // StrRev�� ���� �Լ��Դϴ�.
{
    int len = 0, i = 0;
    while (i != 100) //���̸� ã�� while���Դϴ�.
    {
        if (string[i] == '\0')
        {
            len = i;
            break;
        }
        i++;
    }
    char temp;
    for (i = 0; i < len / 2; i++) //������ for���Դϴ�.
    {
        temp = string[len - i - 1];
        string[len - i - 1] = string[i];
        string[i] = temp;
    }
    return string;
}
void main(void)
{
    char string[100];
    char *pos;

    strcpy(string, "abcde 12345");
    pos = StrRev(string);
    puts(string);
}