/*
Assignment6-2
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
enum // SUN~SAT�� 1~7���� ����
{
    SUN = 1,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

int main(void) // enum�� Ȱ���� ���
{
    printf("SUN : %d\n", SUN);
    printf("MON : %d\n", MON);
    printf("TUE : %d\n", TUE);
    printf("WED : %d\n", WED);
    printf("THU : %d\n", THU);
    printf("FRI : %d\n", FRI);
    printf("SAT : %d\n", SAT);
    return 0;
}