#include <stdio.h>

int main(void)
{
    printf("������ �Է��ϼ���");
    int num;
    scanf("%d", &num);
    if (num < 0)        // �Է¹��� ������ 0���� ������ -1�� ���Ѱ��� ���밪�̰�
    {
        printf("%d", (-1) * num);
    }
    else                // 0�̻��̸� �� ���� ���밪�Դϴ�.��
    {
        printf("%d", num);
    }

    return 0;
}