#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    int n = 50;

    do
    {
        if (n % 2 != 0) // 50~100까지의 수 중에 홀수는 sum에 더하고 개수를 1개씩 늘려줍니다.
        {
            num++;
            sum += n;
        }
        n++;
    } while (n <= 100);

    printf("홀수의 개수: %d\n", num);
    printf("홀수의 합: %d\n", sum);

    return 0;
}