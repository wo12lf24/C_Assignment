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

    printf("�ֻ��� ��� : %d, %d \n", roll1, roll2);
    return 0;
}