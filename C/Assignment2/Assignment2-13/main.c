#include <stdio.h>

int main(void)
{
    float frr[10] = {0.1, 2.0, 3.4, 5.2, 4.5,
                     7.8, 9.7, 1.4, 6.6, 7.2};
    float sum = 0;
    float *pfrr = frr;
    printf("¹è¿­: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", *(pfrr + i));
        sum += *(pfrr + i);
    }
    printf("Æò±Õ: %.6f\n", sum / 10);

    return 0;
}
