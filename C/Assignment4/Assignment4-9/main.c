/*
Assignment4-9
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[800];
    char ss[80];
    int cnt = 0, i;
    int str_len, ss_len;

    printf("���� �Է� : ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    str_len = strlen(str);

    while (1)
    {
        cnt = 0;

        printf("�˻��� ���ڿ� �Է� (����� end) : ");
        fgets(ss, sizeof(ss), stdin);
        ss[strlen(ss) - 1] = '\0';
        if (strcmp(ss, "end") == 0)
            break;
        ss_len = strlen(ss);

        for (i = 0; i < str_len; i++)
        {
            if ((str_len - i) < ss_len)
                break;
            if (strncmp(ss, str + i, ss_len) == 0)
            {
                cnt++;
                i += (ss_len - 1);
            }
        }
        printf("�˻� ��� : %d��\n", cnt);
    }

    return 0;
}