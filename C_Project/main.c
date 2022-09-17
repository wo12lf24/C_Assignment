#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char combi(int num1, int num2, int *hand_num)
{
    char rank;
    printf("%d %d\n", num1, num2);

    if ((num1 == 33 && num2 == 88) || (num1 == 88 && num2 == 33))
    {
        printf("38����");
        return 'a';
    }
    else if ((num1 == 11 && num2 == 33) || (num1 == 33 && num2 == 11))
    {
        printf("13����");
        return 'b';
    }
    else if ((num1 == 11 && num2 == 88) || (num1 == 88 && num2 == 11))
    {
        printf("18����");
        return 'b';
    }
    else if ((num1 == 44 && num2 == 77) || (num1 == 77 && num2 == 44))
    {
        printf("������");
        return 'x';
    }
    else if ((num1 == 44 && num2 == 99) || (num1 == 99 && num2 == 44))
    {
        printf("���ͱ��� ����");
        return 'X';
    }
    else if ((num1 == 44 && num2 == 9) || (num1 == 4 && num2 == 99) || (num1 == 4 && num2 == 9))
    {
        printf("����");
        return 'Y';
    }
    else if ((num1 == 1 && num2 == 11) || (num1 == 11 && num2 == 1))
    {
        printf("1��");
        *hand_num = 1;
        return 'c';
    }
    else if (num1 == 2 && num2 == 2)
    {
        printf("2��");
        *hand_num = 2;
        return 'c';
    }
    else if ((num1 == 3 && num2 == 33) || (num1 == 33 && num2 == 3))
    {
        printf("3��");
        *hand_num = 3;
        return 'c';
    }
    else if ((num1 == 4 && num2 == 44) || (num1 == 44 && num2 == 4))
    {
        printf("4��");
        *hand_num = 4;
        return 'c';
    }
    else if (num1 == 5 && num2 == 5)
    {
        printf("5��");
        *hand_num = 5;
        return 'c';
    }
    else if (num1 == 6 && num2 == 6)
    {
        printf("6��");
        *hand_num = 6;
        return 'c';
    }
    else if ((num1 == 7 && num2 == 77) || (num1 == 77 && num2 == 7))
    {
        printf("7��");
        *hand_num = 7;
        return 'c';
    }
    else if ((num1 == 8 && num2 == 88) || (num1 == 88 && num2 == 8))
    {
        printf("8��");
        *hand_num = 8;
        return 'c';
    }
    else if ((num1 == 9 && num2 == 99) || (num1 == 99 && num2 == 9))
    {
        printf("9��");
        *hand_num = 9;
        return 'c';
    }
    else if (num1 == 10 && num2 == 10)
    {
        printf("�嶯");
        return 'C';
    }
    else if ((num1 == 33 && num2 == 77) || (num1 == 77 && num2 == 33))
    {
        printf("������");
        return 'y';
    }
    else if ((num1 == 1 && num2 == 2) || (num1 == 2 && num2 == 1) || (num1 == 11 && num2 == 2) || (num1 == 2 && num2 == 11))
    {
        printf("�˸�");
        return 'd';
    }
    else if ((num1 == 1 && num2 == 10) || (num1 == 10 && num2 == 1) || (num1 == 11 && num2 == 10) || (num1 == 10 && num2 == 11))
    {
        printf("���");
        return 'g';
    }
    else if ((num1 == 1 && num2 == 4) || (num1 == 4 && num2 == 1) || (num1 == 11 && num2 == 4) || (num1 == 4 && num2 == 11) || (num1 == 1 && num2 == 44) || (num1 == 44 && num2 == 1) || (num1 == 11 && num2 == 44) || (num1 == 44 && num2 == 11))
    {
        printf("����");
        return 'e';
    }
    else if ((num1 == 4 && num2 == 10) || (num1 == 10 && num2 == 4) || (num1 == 44 && num2 == 10) || (num1 == 10 && num2 == 44))
    {
        printf("���");
        return 'h';
    }
    else if ((num1 == 1 && num2 == 9) || (num1 == 9 && num2 == 1) || (num1 == 11 && num2 == 9) || (num1 == 9 && num2 == 11) || (num1 == 1 && num2 == 99) || (num1 == 99 && num2 == 1) || (num1 == 11 && num2 == 99) || (num1 == 99 && num2 == 11))
    {
        printf("����");
        return 'f';
    }
    else if ((num1 == 4 && num2 == 6) || (num1 == 6 && num2 == 4) || (num1 == 44 && num2 == 6) || (num1 == 6 && num2 == 44))
    {
        printf("����");
        return 'i';
    }
    else
    {
        if (num1 > 10)
        {
            num1 = num1 % 10;
        }
        if (num2 > 10)
        {
            num2 = num2 % 10;
        }
        int num3 = num1 + num2;
        if (num3 == 10)
        {
            printf("����");
            *hand_num = 0;
        }
        else if (num3 < 10)
        {
            printf("%d��", num3);
            *hand_num = num3;
        }
        else
        {
            printf("%d��", num3 % 10);
            *hand_num = (num3 % 10);
        }
    }
    return 'j';
}

char compare(char user_c, char cpu_c, int hand_num1, int hand_num2)
{
    if (user_c == cpu_c)
    {
        if (user_c == 'c')
        {
            if (hand_num1 > hand_num2)
            {
                printf("���� �¸�\n");
                return 'W';
            }
            else
            {
                printf("cpu �¸�\n");
                return 'L';
            }
        }
        else if (user_c == 'j')
        {
            if (hand_num1 > hand_num2)
            {
                printf("���� �¸�\n");
                return 'W';
            }
            else if (hand_num1 == hand_num2)
            {
                printf("����\n");
                return 'D';
            }
            else
            {
                printf("cpu �¸�\n");
                return 'L';
            }
        }
        else
        {
            printf("����\n");
            return 'D';
        }
    }
    else
    {
        if (user_c == 'a')
        {
            printf("���� �¸�\n");
            return 'W';
        }
        else if (user_c == 'b')
        {
            if (cpu_c == 'x')
            {
                printf("cpu �¸�\n");
                return 'L';
            }
            else if (cpu_c == 'X')
            {
                printf("���ֱ��� ����\n ����\n");
                return 'D';
            }
            else
            {
                printf("���� �¸�\n");
                return 'W';
            }
        }
        else if (user_c == 'X')
        {
            if (cpu_c == 'a' || cpu_c == 'C')
            {
                printf("cpu �¸�\n");
                return 'L';
            }
            else
            {
                printf("���ֱ��� ����\n ����\n");
                return 'D';
            }
        }
        else if (user_c == 'x')
        {
            if (cpu_c == 'b')
            {
                printf("���� �¸�\n");
                return 'W';
            }
            else if (cpu_c == 'j' && hand_num2 == 0)
            {
                printf("����\n");
                return 'D';
            }
            else
            {
                printf("cpu �¸�\n");
                return 'L';
            }
        }
        else if (user_c == 'Y')
        {
            if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C')
            {
                printf("cpu �¸�\n");
                return 'L';
            }
            else
            {
                printf("���� ����\n");
                return 'D';
            }
        }
        else if (user_c == 'C')
        {
            if (cpu_c == 'a' || cpu_c == 'b')
            {
                printf("cpu �¸�\n");
                return 'L';
            }
            else
            {
                printf("���� �¸�\n");
                return 'W';
            }
        }
        else if (user_c == 'c')
        {
            if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'y')
            {
                printf("cpu �¸�\n");
                return 'L';
            }
            else if (cpu_c == 'X')
            {
                printf("���� ����\n");
                return 'D';
            }
            else
            {
                printf("���� �¸�\n");
                return 'W';
            }
        }
    }
}

int main(void)
{
    int arr[20] = {1, 11, 2, 2, 3, 33, 4, 44, 5, 5,
                   6, 6, 7, 77, 8, 88, 9, 99, 10, 10}; // 11, 33, 44, 77, 88, 99�� Ư����(��, ���� ���..)

    int num1, num2;
    int num3, num4;
    char user_c, cpu_c;
    int hand_num1, hand_num2;
    int *phand_num1 = &hand_num1;
    int *phand_num2 = &hand_num2;
    int select = 1;
    while (select == 1)
    {
        srand(time(0));
        printf("\n");
        num1 = rand() % 20;
        while (1)
        {
            num2 = rand() % 20;
            if (num1 == num2)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        while (1)
        {
            num3 = rand() % 20;
            if (num3 == num1 || num3 == num2)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        while (1)
        {
            num4 = rand() % 20;
            if (num4 == num1 || num4 == num2 || num4 == num3)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        printf("����� �д�\n");
        user_c = combi(arr[num1], arr[num3], phand_num1);
        printf("�Դϴ�.\n");
        printf("1. ��, 2. ���� : ");
        scanf("%d", &select);
        if (select == 1)
        {
            printf("\n��ǻ���� �д�\n"); //���߿� ���ּ� ��з� �� ����
            cpu_c = combi(arr[num2], arr[num4], phand_num2);
            printf("�Դϴ�.\n\n");
            compare(user_c, cpu_c, hand_num1, hand_num2);
        }
        else
        {
            printf("cpu �¸�\n");
        }
        printf("����Ͻ÷��� 1�� �׸��Ϸ��� 2�� �����ּ���.\n");
        scanf("%d", &select);
    }
    return 0;
}