/*
Assignment3-11
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>

bool copy_killer(char word[10][20], int i, char name[20])//�ߺ��� �˻��ϴ� �Լ��Դϴ�.
{
    for (int j = 0; j < i; j++)
    {
        if (strcmp(word[j], name) == 0)
        {
            printf("@ �̸��� �̹� ��ϵǾ����ϴ�.\n");  //�ߺ��̶�� false��
            return false;
        }
    }
    return true;    //���ο���̶�� true�� ��ȯ�մϴ�.
}
int input_name(char word[10][20])//�ܾ �Է¹޴� �Լ��Դϴ�.
{
    int i;
    char name[20];
    for (i = 0; i < 10; i++)
    {
        printf("�ܾ� �Է� : ");
        scanf("%s", &name);
        if (strcmp(name, "end") == 0)
        {
            printf("@ �� %d���� �ԷµǾ����ϴ�.\n", i);
            break;
        }

        if (copy_killer(word, i, name))
        {
            strcpy(word[i], name);
        }
        else    //�ߺ��̶�� ��ü������ ������ ���� �ʰ��մϴ�.
        {
            i--;
        } 
    }
    return i;
}
void print_name(char name[10][20], int cnt) //����ϴ� �Լ��Դϴ�.
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%s\n", name[i]);
    }
}

int main(void)  //������ �����ִ� main�� ����Ѹ���Դϴ�.
{
    char name[10][20];
    int cnt;

    cnt = input_name(name);
    print_name(name, cnt);

    return 0;
}