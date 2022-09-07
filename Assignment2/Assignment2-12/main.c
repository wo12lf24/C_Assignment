#include <stdio.h>

int main(void)
{
    int arr[10] = {11, 22, 33, 44, 55,
                   66, 77, 88, 99, 110};
    int *parr = arr;
    printf("배열: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(parr + i)); 
    }
    printf("\n역순: ");
    for (int i = 9; i > -1; i--)
    {
        printf("%d ", *(parr + i));
    }

    return 0;
}