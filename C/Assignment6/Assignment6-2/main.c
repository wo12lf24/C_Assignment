/*
Assignment6-2
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
typedef enum week // SUN~SAT�� 1~7���� ����
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

int main(void) // enum�� Ȱ���� ���
{
    week day;
    for (day = SUN; day <= SAT; day += 1)
    {
        Week(day);
    }
    return 0;
}