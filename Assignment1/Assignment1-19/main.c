#include <stdio.h>

int main(void)
{
    printf("���̸� �Է��ϼ��� : ");
    int age;
    scanf("%d",&age);
    if(age<7||age>59)       //6�� ���� 60�� �̻��� ���� �����̸�
    {
        printf("�����Դϴ�.\n");
    }
    else                    //�� �ܴ� ���� 1000���Դϴ�.
    {
        printf("1000���Դϴ�.\n");
    }
    
    return 0;
}