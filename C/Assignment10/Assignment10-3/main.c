/*
Assignment10-3
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("���� �Է�: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("�Ҵ�� �޸��� �ּҰ� ���:\n");
    for (i = 0; i < n1; ++i)
    {
        printf("%pc\n", ptr + i);
    }
    printf("\n���ο� ���� �Է�: ");
    scanf("%d", &n2);

    ptr = (int *)realloc(ptr, n2 * sizeof(int));

    printf("���� �Ҵ�� �޸� �ּ� �Է�:\n");
    for (i = 0; i < n2; ++i)
    {
        printf("%pc\n", ptr + i);
    }
    free(ptr);
    return 0;
}