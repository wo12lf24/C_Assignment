/*
Assignment6-2
학번:2019202003
이름:김주형
*/
#include <stdio.h>
enum // SUN~SAT을 1~7까지 지정
{
    SUN = 1,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

int main(void) // enum을 활용해 출력
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