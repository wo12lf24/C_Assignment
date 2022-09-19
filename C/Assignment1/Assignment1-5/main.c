/*
Assignment1-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    float cm, kg;
    float BMI;
    printf("본인의 키와 몸무게를 입력해주세요.\n");
    printf("키(cm) : ");
    scanf("%f", &cm);
    printf("몸무게(kg) : ");
    scanf("%f", &kg); // 키와 몸무게를 각각 받고

    BMI = (kg / ((cm / 100) * (cm / 100)));    // BMI를 구하는 공식에 대입.
    printf("당신의 BMI 측정량은 %.2f\n", BMI); // .2f는 소수 둘째자리 까지 나타내기 위함.

    return 0;
}