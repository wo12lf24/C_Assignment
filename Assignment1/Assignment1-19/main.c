#include <stdio.h>

int main(void)
{
    printf("���̸� �Է��ϼ��� : ");
    int age;
    scanf("%d",&age);
    if(age<7||age>59)
    {
        printf("�����Դϴ�.\n");
    }
    else
    {
        printf("1000���Դϴ�.\n");
    }
    
    return 0;
}