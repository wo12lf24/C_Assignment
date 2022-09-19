/*
Assignment1-14
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        printf("%d %% %d = %d\n", num, i, num % i);
        if (num % i == 0) // 나머지가 없으면 약수입니다.
        {
            count++;
        }
    }
    printf("약수의 개수 : %d\n", count); //예시에 1과 자기자신은 약수로 취급이 안되있어서 제외하였습니다.

    return 0;
}