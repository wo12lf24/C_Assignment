#include <stdio.h>

int main(void)
{
    printf("������ �Է��ϼ��� : ");
    int num;                            //������ �Է¹޾�
    scanf("%d", &num);
    for (int i = 0; i < num; i++)       // �� ����ŭ '*'�� ����մϴ�.
    {
        printf("*");
    }
    printf("\n");

    return 0;
}