/*
Assignment6-2
학번:2019202003
이름:김주형
*/
#include <stdio.h>
typedef enum week // SUN~SAT을 1~7까지 지정
{
    SUN = 1,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
} week;
void Week(int num)
{
    switch (num)
    {
    case SUN:
        printf("SUN : %d\n", SUN);
        return;
    case MON:
        printf("MON : %d\n", MON);
        return;
    case TUE:
        printf("TUE : %d\n", TUE);
        return;
    case WED:
        printf("WED : %d\n", WED);
        return;
    case THU:
        printf("THU : %d\n", THU);
        return;
    case FRI:
        printf("SUN : %d\n", FRI);
        return;
    case SAT:
        printf("SAT : %d\n", SAT);
        return;
    }
}

int main(void) // enum을 활용해 출력
{
    week day;
    for (day = SUN; day <= SAT; day += 1)
    {
        Week(day);
    }
    return 0;
}