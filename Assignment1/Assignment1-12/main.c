#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    int n = 50;

    do
    {
        if (n % 2 != 0)
        {
            num++;
            sum += n;
        }
        n++;
    } while (n <= 100);

    printf("È¦¼öÀÇ °³¼ö: %d\n", num);
    printf("È¦¼öÀÇ ÇÕ: %d\n", sum);

    return 0;
}