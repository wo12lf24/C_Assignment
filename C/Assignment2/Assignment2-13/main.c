/*
Assignment2-12
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    float frr[10] = {0.1, 2.0, 3.4, 5.2, 4.5,
                     7.8, 9.7, 1.4, 6.6, 7.2};
    float sum = 0;
    float *pfrr = frr; //�迭 ���Ҹ� ����Ű�� �����͸� �̿��Ͽ�
    printf("�迭: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", *(pfrr + i));
        sum += *(pfrr + i);
    }
    printf("\n���: %.6f\n", sum / 10); //�迭�� ����� ����Ͽ����ϴ�.

    return 0;
}
