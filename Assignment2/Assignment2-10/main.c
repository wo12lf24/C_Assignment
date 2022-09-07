#include <stdio.h>

int main(void)
{
    double arr[3] = {0, 1, 2};

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d]ÀÇ ÁÖ¼Ò: %d\n", i, (arr + i));
    }

    return 0;
}