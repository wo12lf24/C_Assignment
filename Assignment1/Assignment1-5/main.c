#include <stdio.h>

int main(void)
{
    float cm, kg;
    float BMI;
    printf("������ Ű�� �����Ը� �Է����ּ���.\n");
    printf("Ű(cm) : ");
    scanf("%f", &cm);
    printf("������(kg) : ");
    scanf("%f", &kg);

    BMI = (kg / ((cm / 100) * (cm / 100)));
    printf("����� BMI �������� %.2f\n", BMI);

    return 0;
}