/*
Assignment10-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("길이 입력: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("할당된 메모리의 주소값 출력:\n");
    for (i = 0; i < n1; ++i)
    {
        printf("%pc\n", ptr + i);
    }
    printf("\n새로운 길이 입력: ");
    scanf("%d", &n2);

    ptr = (int *)realloc(ptr, n2 * sizeof(int));

    printf("새로 할당된 메모리 주소 입력:\n");
    for (i = 0; i < n2; ++i)
    {
        printf("%pc\n", ptr + i);
    }
    free(ptr);
    return 0;
}