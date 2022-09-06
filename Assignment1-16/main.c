#include <stdio.h>

int main(void)
{
    int num1, num2, temp;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);
    temp = num2;
    num2 = num1;
    num1 = temp;
    printf("교환 된 두 수 : %d %d", num1, num2);

    return 0;
}