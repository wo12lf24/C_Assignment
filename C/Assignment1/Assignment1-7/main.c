/*
Assignment1-7
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i != 11) // i가 11이 되면 탈출합니다.
    {
        printf("%d\n", i++); // i를 출력하며 1씩 더해줍니다.
    }

    return 0;
}