/*
Assignment7-6
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDie(void)
{
    return rand() %6 +1;
}
int main(void)
{
    int roll1, roll2;

    srand((int)time(NULL));

    roll1=RollDie();
    roll2=RollDie();

    printf("주사위 결과 : %d, %d \n", roll1, roll2);
    return 0;
}