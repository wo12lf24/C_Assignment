/*
Assignment7-1
�й�:2019202003
�̸�:������
*/
#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
    int second;
    printf("�� (second) �Է� : ");
    scanf("%d", &second);
    int hour = second / 3600;                 // 3600�ʴ� 1�ð�
    int minute = (second - hour * 3600) / 60; // second - hour * 3600 = minute
    second = second - hour * 3600 - minute * 60;
    printf("[h:%d, m:%d, s:%d]", hour, minute, second);

    return 0;
}