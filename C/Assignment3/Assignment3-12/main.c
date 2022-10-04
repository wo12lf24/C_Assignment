/*
Assignment3-12
학번:2019202003
이름:김주형
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
    for (int i = 0; i < 3; i++) //같은 위치에 같은 값이 있는 경우에
    {                           // 그값의 위치와 그 수를 세는 2중 for문입니다.
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
    printf("일치하는 번호의 수 : %d\n", cnt);
    printf("배열에서의 위치(행, 열)...\n");
    for (int i = 0; i < cnt; i++)
    {
        printf("(%d, %d)\n", row[i], col[i]);
    }

    return 0;
}