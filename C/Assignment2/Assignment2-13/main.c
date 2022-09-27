/*
Assignment2-12
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    float frr[10] = {0.1, 2.0, 3.4, 5.2, 4.5,
                     7.8, 9.7, 1.4, 6.6, 7.2};
    float sum = 0;
    float *pfrr = frr; //배열 원소를 가리키는 포인터를 이용하여
    printf("배열: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", *(pfrr + i));
        sum += *(pfrr + i);
    }
    printf("\n평균: %.6f\n", sum / 10); //배열의 평균을 출력하였습니다.

    return 0;
}
