/*
Assignment2-11
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    float frr[10] = {0.1, 2.0, 3.4, 5.2, 4.5,
                     7.8, 9.7, 1.4, 6.6, 7.2};

    float *pfrr = frr;
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f  ", *(pfrr + i)); //������ ������ �̿��Ͽ����ϴ�.
    }
    printf("\n");

    return 0;
}
