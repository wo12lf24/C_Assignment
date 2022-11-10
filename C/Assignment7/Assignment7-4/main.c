#include <stdio.h>

void ShowArr(int (*arr)[4])
{ }
void RotateArr(int (*arr)[4])
{ }

int main(void)
{
    int i = 0;

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    for (i = 0; i < 4; i++)
    {
        ShowArr(arr);
        RotateArr(arr);
    }

    return 0;
}
