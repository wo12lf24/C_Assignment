/*
Assignment2-10
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    double arr[3] = {0, 1, 2};

    for (int i = 0; i < 3; i++)     // arr[i] 주소 값을 출력합니다.
    {
        printf("arr[%d]의 주소: %d\n", i, (arr + i));
    }

    return 0;
}