/*
Assignment3-6
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int arr20[1][4];
    int arr30[1][2];
    int arr40[1][3];
    int num;
    printf("20�� ������ ���� ����ŰŰ Ƚ��\n"); // 20�� ���� 4���� ��������ŰŰ Ƚ��
    for (int i = 0; i < 4; i++)
    {
        printf("%dth : ", i + 1);
        scanf("%d", &num);
        arr20[0][i] = num;
    }
    printf("\n30�� ������ ���� ����ŰŰ Ƚ��\n"); // 30�� ���� 4���� ��������ŰŰ Ƚ��
    for (int i = 0; i < 2; i++)
    {
        printf("%dth : ", i + 1);
        scanf("%d", &num);
        arr30[0][i] = num;
    }
    printf("\n40�� ������ ���� ����ŰŰ Ƚ��\n"); // 40�� ���� 4���� ��������ŰŰ Ƚ��
    for (int i = 0; i < 3; i++)
    {
        printf("%dth : ", i + 1);
        scanf("%d", &num);
        arr40[0][i] = num;
    }
    printf("\n\n���ɺ� ��� ���� ����ŰŰ Ƚ��\n");
    printf("20�� : %.2f", float(arr20[0][0] + arr20[0][1] + arr20[0][2] + arr20[0][3]) / 4);
    printf("\n30�� : %.2f", float(arr30[0][0] + arr30[0][1]) / 2);
    printf("\n40�� : %.2f\n", float(arr40[0][0] + arr40[0][1] + arr40[0][2]) / 3);

    return 0;
}