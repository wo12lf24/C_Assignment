#include <stdio.h>

int main(void)
{
    int num = 1;
    int sum = 0;
    while (num != 100)  //100¹Ì¸¸ÀÇ ¼ö Áß¿¡ Â¦¼ö´Â »©°í È¦¼ö´Â ´õÇÕ´Ï´Ù.
    {
        if (num % 2 != 0)   //È¦¼ö
        {
            sum -= num++;
        }
        else    //Â¦¼ö
        {
            sum += num++;
        }
    }
    printf("ÇÕ : %d\n", sum);
    return 0;
}