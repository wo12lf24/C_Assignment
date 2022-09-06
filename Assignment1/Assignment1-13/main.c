#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;
    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("È¦¼öÀÇ ÇÕ : %d", sum);
    return 0;
}