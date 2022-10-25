/*
Assignment5-4
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct
{
    char name[5][20]; //이름 저장배열
    int age[5];       //그외 저장배열
    float cm[5];
    float kg[5];
} Student;

int main(void)
{
    int select = 0;
    int friend_num = 0;
    while (1)
    {
        printf("     [ 메뉴 ]     \n");
        printf("==================\n");
        printf("1. 친구 추가\n");
        printf("2. 친구 목록 보기\n");
        printf("3. 종료\n");
        printf("==================\n");
        printf("번호 선택 : ");
        scanf("%d", &select);
        if (select == 1)
        {
            if (friend_num >= 5)
            {
                printf("친구 수 다참\n\n");
                break;
            }
            printf("\n새로운 친구 정보를 입력하세요\n");
            printf("1. 이름 : ");
            scanf("%s", &Student.name[friend_num]);
            printf("2. 나이 : ");
            scanf("%d", &Student.age[friend_num]);
            printf("3. 키 : ");
            scanf("%f", &Student.cm[friend_num]);
            printf("3. 몸무게 : ");
            scanf("%f", &Student.kg[friend_num]);
            printf("입력을 완료했습니다.\n\n");
            friend_num += 1;
        }
        else if (select == 2)
        {
            printf("\n등록된 친구 목록\n");
            printf("==================\n");
            for (int i = 0; i < friend_num; i++)
            {
                printf("%s      , %d, %.2f, %.2f\n",
                       Student.name[i], Student.age[i], Student.cm[i], Student.kg[i]);
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