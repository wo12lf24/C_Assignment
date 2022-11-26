/*
Assignment7-7
학번:2019202003
이름:김주형
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
            printf("당신이 이겼습니다. \n");
            win++;
        }
        else if (result == -1)
        {
            printf("당신이 졌습니다. \n");
            break;
        }
        else
        {
            printf("비겼습니다. \n");
            same++;
        }
    }
    printf("게임의 결과: %d승, %d무 \n", win, same);
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
        printf("User는 바위 선택, ");
    }
    else if (sel == 2)
    {
        printf("User는 가위 선택, ");
    }
    else
    {
        printf("User는 보 선택, ");
    }
    return sel;
}
int GetComSel(void)
{
    int sel = rand() % 3 + 1;
    if (sel == 1)
    {
        printf("컴퓨터는 바위 선택, ");
    }
    else if (sel == 2)
    {
        printf("컴퓨터는 가위 선택, ");
    }
    else
    {
        printf("컴퓨터는 보 선택, ");
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