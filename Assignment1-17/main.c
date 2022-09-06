#include <stdio.h>

int main(void)
{
    int num;
    printf("두자리 수를 입력하세요 : ");
    scanf("%d", &num);
    printf("1의 자리 수 : %d\n", num % 10);
    printf("10의 자리 수 : %d\n", num / 10);

    return 0;
}