/*
Assignment7-7
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int M = 1;
const int G = 2;
const int B = 3;

void Randomize(void);
int GetComSel(void);
int GetUsrSel(void);
int WhoWin(int a, int b);

int main(void)
{
    int com, usr;
    int result;
    int win = 0, same = 0;

    Randomize();

    while (1)
    {
        usr = GetUsrSel();
        com = GetComSel();

        result = WhoWin(com, usr);
        if (result == 1)
        {
            printf("����� �̰���ϴ�. \n");
            win++;
        }
        else if (result == -1)
        {
            printf("����� �����ϴ�. \n");
            break;
        }
        else
        {
            printf("�����ϴ�. \n");
            same++;
        }
    }
    printf("������ ���: %d��, %d�� \n", win, same);
    return 0;
}

void Randomize(void)
{
    srand((int)time(NULL));
}
int GetUsrSel(void)
{
    int sel = rand() % 3 + 1;
    if (sel == 1)
    {
        printf("User�� ���� ����, ");
    }
    else if (sel == 2)
    {
        printf("User�� ���� ����, ");
    }
    else
    {
        printf("User�� �� ����, ");
    }
    return sel;
}
int GetComSel(void)
{
    int sel = rand() % 3 + 1;
    if (sel == 1)
    {
        printf("��ǻ�ʹ� ���� ����, ");
    }
    else if (sel == 2)
    {
        printf("��ǻ�ʹ� ���� ����, ");
    }
    else
    {
        printf("��ǻ�ʹ� �� ����, ");
    }
    return sel;
}
int WhoWin(int s1, int s2)
{
    if (s1 == s2)
    {
        return 0;
    }
    else if (s1 % 3 == (s2 + 1) % 3)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}