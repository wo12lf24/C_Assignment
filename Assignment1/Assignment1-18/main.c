#include <stdio.h>

int main(void)
{
    printf("정수를 입력하세요");
    int num;
    scanf("%d", &num);
    if (num < 0)        // 입력받은 정수가 0보다 작으면 -1을 곱한값이 절대값이고
    {
        printf("%d", (-1) * num);
    }
    else                // 0이상이면 그 값이 절대값입니다.ㄴ
    {
        printf("%d", num);
    }

    return 0;
}