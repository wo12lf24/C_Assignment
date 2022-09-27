/*
Assignment2-12
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int arr[10] = {11, 22, 33, 44, 55,
                   66, 77, 88, 99, 110};
    int *parr = arr;
    printf("배열: ");
    for (int i = 0; i < 10; i++) // 포인터 연산을 이용해서
    {
        printf("%d ", *(parr + i)); // 정순으로 출력하고
    }
    printf("\n역순: ");
    for (int i = 9; i > -1; i--)
    {
        printf("%d ", *(parr + i)); // 역순으로 출력합니다.
    }
    printf("\n");
    return 0;
}