/*
Assignment3-12
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

int main(void)
{
    int ary1[3][4] = {
        {15, 3, 9, 11},
        {23, 7, 10, 12},
        {0, 17, 55, 24}};
    int ary2[3][4] = {
        {13, 8, 9, 15},
        {23, 0, 10, 11},
        {29, 17, 43, 3}};

    int row[12];
    int col[12];
    int cnt = 0;
    for (int i = 0; i < 3; i++) //���� ��ġ�� ���� ���� �ִ� ��쿡
    {                           // �װ��� ��ġ�� �� ���� ���� 2�� for���Դϴ�.
        for (int j = 0; j < 4; j++)
        {
            if (ary1[i][j] == ary2[i][j])
            {
                row[cnt] = i;
                col[cnt] = j;
                cnt++;
            }
        }
    }
    printf("��ġ�ϴ� ��ȣ�� �� : %d\n", cnt);
    printf("�迭������ ��ġ(��, ��)...\n");
    for (int i = 0; i < cnt; i++)
    {
        printf("(%d, %d)\n", row[i], col[i]);
    }

    return 0;
}