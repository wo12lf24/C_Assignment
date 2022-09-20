/*
Assignment2-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>

int main(void)
{
    printf("10개의 정수를 입력하세요.\n");
    int arr[10];
    int num;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0) // num이 짝수라면
        {
            arr[9 - count] = num; // 배열 arr의 끝에서부터 한자리씩 채워넣습니다.
            count++;
        }
        else // num이 홀수라면
        {
            arr[i - count] = num; // 배열 arr의 앞자리서부터 한자리씩 채워넣습니다.
        }
    }
    printf("출력 : { ");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d ", arr[i]); //마지막은 쉼표가 없어서 따로 해주었습니다.
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("}\n");
    return 0;
}