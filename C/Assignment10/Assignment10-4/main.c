/*
Assignment10-4
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        printf("\n\nEnter the new size of the array: ");
        scanf("%d", &n);
        ptr = (int *)realloc(ptr, n * sizeof(int));

        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        free(ptr);
    }

    return 0;
}