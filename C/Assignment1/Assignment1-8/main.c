#include <stdio.h>

int main(void)
{
    char c;

    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%c", &c);
    if (c == 'M' || c == 'm')   // �Է¹��� ���ڰ� M�Ǵ� m�̸�
    {
        printf("����\n");       // '����'�� ����մϴ�.
    }
    else if(c=='F'||c=='f')     // �Է¹��� ���ڰ� F, f�̸�
    {
        printf("����\n");       // '����'�� ����մϴ�.
    }
    else
    { }

    return 0;
}  