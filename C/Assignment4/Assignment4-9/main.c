/*
Assignment4-5
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    char word[100];
    printf("���� �Է� : ");
    scanf("%s", &string);
    char *temp = strtok(string, " ");
    while (temp != NULL)
    {
        printf("%s\n", temp);
        temp = strtok(NULL, " ");
    }
    printf("�˻��� ���ڿ� �Է� (����� end) : ");
    scanf("%s", &word);

    return 0;
}