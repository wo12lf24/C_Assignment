/*
Assignment7-3
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[10];
    int count = 0;
    printf("문자열 입력 : ");
    scanf("%s", &word);
    int length = strlen(word); //입력받은 단어의 길이를 구합니다.

    for (int i = 0; i < length / 2; i++) //그 반만큼(홀수개면 내림)시행합니다.
    {
        if (word[i] == word[length - i - 1]) //회문인지 아닌지 확인하는 작업을.
        {
            count++; // 홀수개일땐 가운데 제외 양옆이 같으면 되므로 홀수, 짝수 상관없이
        }            // length/2로 해주었습니다.
    }
    if ((length / 2) == count++) // 길이의 절반값(홀수면 소수점 내림)이 같은 회수(count)와 같으면
    {
        printf("회문 입니다.\n"); //회문입니다.
    }
    else
    {
        printf("회문이 아닙니다.\n");
    }

    return 0;
}