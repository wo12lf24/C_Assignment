/*
Assignment3-10
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <math.h>

int eva(int arr[7])
{
    float num = 0;
    for (int i = 0; i < 7; i++)
    {
        num += arr[i];
    }
    num = num / 7 return round(num);
}

int main(void)
{
    int arr[4];

    int arr1[7] = {70, 45, 100, 92, 150, 81, 90};    //������
    int arr2[7] = {88, 92, 77, 30, 52, 55, 66};      //������
    int arr3[7] = {50, 90, 88, 75, 77, 49, 72};      //����
    int arr4[7] = {120, 92, 80, 150, 130, 105, 113}; //�븲��
    arr[0] = eva(arr1);
    arr[1] = eva(arr2);
    arr[2] = eva(arr3);
    arr[3] = eva(arr4);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return 0;
}