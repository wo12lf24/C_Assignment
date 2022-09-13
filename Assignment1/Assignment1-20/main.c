#include <stdio.h>

int main(void)
{
    printf("정수를 입력하세요 : ");
    int num;                            //정수를 입력받아
    scanf("%d", &num);
    for (int i = 0; i < num; i++)       // 그 값만큼 '*'을 출력합니다.
    {
        printf("*");
    }
    printf("\n");

    return 0;
}