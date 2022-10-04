/*
Assignment3-11
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

bool copy_killer(char word[10][20], int i, char name[20])//중복을 검사하는 함수입니다.
{
    for (int j = 0; j < i; j++)
    {
        if (strcmp(word[j], name) == 0)
        {
            printf("@ 이름이 이미 등록되었습니다.\n");  //중복이라면 false를
            return false;
        }
    }
    return true;    //새로운것이라면 true를 반환합니다.
}
int input_name(char word[10][20])//단어를 입력받는 함수입니다.
{
    int i;
    char name[20];
    for (i = 0; i < 10; i++)
    {
        printf("단어 입력 : ");
        scanf("%s", &name);
        if (strcmp(name, "end") == 0)
        {
            printf("@ 총 %d명이 입력되었습니다.\n", i);
            break;
        }

        if (copy_killer(word, i, name))
        {
            strcpy(word[i], name);
        }
        else    //중복이라면 전체개수에 포함이 되지 않게합니다.
        {
            i--;
        } 
    }
    return i;
}
void print_name(char name[10][20], int cnt) //출력하는 함수입니다.
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%s\n", name[i]);
    }
}

int main(void)  //문제에 나와있는 main만 사용한모습입니다.
{
    char name[10][20];
    int cnt;

    cnt = input_name(name);
    print_name(name, cnt);

    return 0;
}