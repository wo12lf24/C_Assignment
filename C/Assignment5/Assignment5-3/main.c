/*
Assignment5-3
�й�:2019202003
�̸�:������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int select = 0;
    int friend_num = 0;

    char name[5][20]; //�̸� ����迭
    int age[5];       //�׿� ����迭
    float cm[5];
    float kg[5];

    while (1)
    {
        printf("     [ �޴� ]     \n");
        printf("==================\n");
        printf("1. ģ�� �߰�\n");
        printf("2. ģ�� ��� ����\n");
        printf("3. ����\n");
        printf("==================\n");
        printf("��ȣ ���� : ");
        scanf("%d", &select);

        if (select == 1)
        {
            if (friend_num >= 5)
            {
                printf("ģ�� �� ����\n\n");
                break;
            }
            printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
            printf("1. �̸� : ");
            scanf("%s", &name[friend_num][0]);
            printf("2. ���� : ");
            scanf("%d", &age[friend_num]);
            printf("3. Ű : ");
            scanf("%f", &cm[friend_num]);
            printf("3. ������ : ");
            scanf("%f", &kg[friend_num]);
            printf("�Է��� �Ϸ��߽��ϴ�.\n\n");
            friend_num += 1;
        }
        else if (select == 2)
        {
            printf("��ϵ� ģ�� ���\n");
            printf("==================\n");
            for (int i = 0; i < friend_num; i++)
            {
                printf("%s      , %d, %.2f, %.2f\n",
                       name[i], age[i], cm[i], kg[i]);
            }
            printf("==================\n\n");
        }
        else if (select == 3)
        {
            break;
        }
        else
        {
            printf("wrong number\n\n");
        }
    }

    return 0;
}