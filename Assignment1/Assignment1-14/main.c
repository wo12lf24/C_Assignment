#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        printf("%d %% %d = %d\n", num, i, num % i);
        if (num % i == 0)
        {
            count++;
        }
    }
    printf("약수의 개수 : %d\n", count);

    return 0;
}