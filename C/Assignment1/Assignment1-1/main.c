/*
Assignment1-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
        int num;
        printf("������ �Է����ּ��� : ");
        scanf("%d", &num);

        switch (num / 10)
        {
        case 10:
        case 9:
                printf("A"); // 90�� �̻��� 'A'
                break;
        case 8:
                printf("B"); // 80~89���� 'B'
                break;
        case 7:
                printf("C"); // 70~79���� 'C'
                break;
        case 6:
                printf("D"); // 60~69���� 'D'
                break;
        default:
                printf("F"); // 59�� ���ϴ� 'E'�� ����մϴ�.
                break;
        }
        printf("����Դϴ�.\n");

        return 0;
}