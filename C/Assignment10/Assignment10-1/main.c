/*
Assignment10-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int*arr;
    printf("���ϴ� �迭�� ���� �Է�: ");
    scanf("%d", &n);
    arr=(int*)malloc(sizeof(int)*n);

    printf("n���� ���� �Է�: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("�Է� ���� ����: ");
    for(int i =0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}