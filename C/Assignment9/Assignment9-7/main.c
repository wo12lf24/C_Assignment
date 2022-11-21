#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE *fr = fopen("C_Assignment\\C\\Assignment9\\Assignment9-7\\number.txt", "r");

    double num = 0;
    double total = 0;

    while (fscanf(fr, "%lf", &num) != EOF)
    {
        printf("%.2lf \n", num);
        total += num;
    }

    printf("%.2lf \n", total);
    fclose(fr);

    return 0;
}