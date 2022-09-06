#include <stdio.h>

int main(void)
{
    int num = 1;
    int sum = 0;
    while (num != 100)
    {
        if (num % 2 != 0)
        {
            sum -= num++;
        }
        else
        {
            sum += num++;
        }
    }
    printf("гу : %d\n", sum);
    return 0;
}