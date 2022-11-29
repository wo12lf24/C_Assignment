/*
Assignment10-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int **mat;
    int r;
    int width, height;
    float distance = 0;

    printf("Input your heihg and width: ");
    scanf("%d", &width);
    height = width;

    printf("Input  your radius: ");
    scanf("%d", &r);

    mat = (int **)malloc(height * sizeof(int));

    int centerX, centerY;
    centerX = (height + 1) / 2 - 1;
    centerY = (width + 1) / 2 - 1;
    for (int i = 0; i < width; i++)
    {
        mat[i] = (int *)malloc(width * sizeof(int));
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            mat[i][j] = 0;
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            distance = sqrt(pow(centerX - j, 2) + pow(centerY - i, 2));
            if (distance <= r)
                mat[i][j] = 1;
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < height; i++)
    {
        free(mat[i]);
    }
    free(mat);
    return 0;
}