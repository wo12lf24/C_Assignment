/*
Assignment1-5
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    float cm, kg;
    float BMI;
    printf("������ Ű�� �����Ը� �Է����ּ���.\n");
    printf("Ű(cm) : ");
    scanf("%f", &cm);
    printf("������(kg) : ");
    scanf("%f", &kg); // Ű�� �����Ը� ���� �ް�

    BMI = (kg / ((cm / 100) * (cm / 100)));    // BMI�� ���ϴ� ���Ŀ� ����.
    printf("����� BMI �������� %.2f\n", BMI); // .2f�� �Ҽ� ��°�ڸ� ���� ��Ÿ���� ����.

    return 0;
}