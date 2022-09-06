#include <stdio.h>

int main(void)
{
    float cm, kg;
    float BMI;
    printf("본인의 키와 몸무게를 입력해주세요.\n");
    printf("키(cm) : ");
    scanf("%f", &cm);
    printf("몸무게(kg) : ");
    scanf("%f", &kg);

    BMI = (kg / ((cm / 100) * (cm / 100)));
    printf("당신의 BMI 측정량은 %.2f\n", BMI);

    return 0;
}