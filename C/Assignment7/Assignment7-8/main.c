#include <stdio.h>

int main()
{
    int max, i, tmp = 0;
    int in[3];

    while (1)
    {
        scanf("%d %d %d", &in[0], &in[1], &in[2]);

        if (in[0] == 0 && in[1] == 0 && in[2] == 0)
        {
            break;
        }
        max = 0;
        tmp = 0;
        for (i = 0; i < 3; i++)
        {
            if (in[i] > max)
            {
                max = in[i];
            }
        }
        for (i = 0; i < 3; i++)
        {
            if (in[i] != max)
            {
                tmp += in[i] * in[i];
            }
        }
        if (max * max == tmp)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}