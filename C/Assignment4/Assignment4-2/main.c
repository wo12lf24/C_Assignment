/*
Assignment4-2
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

int StrCmp(char *str1, char *str2) // strcmp�� ���� �Լ��Դϴ�.
{
    int i = 0;
    while (i != 100)
    {
        if (str1[i] != str2[i]) //�ٸ��� -1��
        {
            return -1;
        }
        i++;
    }
    return 1; //������ 1�� ��ȯ�մϴ�.
}

void main(void)
{
    int result;

    result = strcmp("abc", "ABC");
    printf("%d \n", result);

    result = StrCmp("abc", "abcde");
    printf("%d \n", result);

    result = StrCmp("World Cup", "world cup");
    printf("%d \n", result);
}