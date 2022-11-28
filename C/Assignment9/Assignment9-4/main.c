/*
Assignment9-4
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#define STR_SIZE 100

int main()
{
    char ans[20];
    char str[STR_SIZE];
    int pass = 0;

    printf("찾으실 정보를 입력하세요 : ");
    scanf("%s", ans);

    FILE*fr =fopen("C_Assignment\\C\\Assignment9\\Assignment9-4\\mystery.txt","r");
    if(fr==NULL)
    {
        printf("파일 읽기 실패!");
        return -1;
    }
    while(fgets(str, STR_SIZE, fr)!=NULL)
    {
        if(strstr(str, ans)!=NULL)
        {
            printf("문자열을 찾았습니다. \n");
            printf("%s", str);
            pass++;
        }
    }
    if(pass==0)
    {
        printf("문자열을 찾을 수 없습니다.");
    }
    fclose(fr);

    return 0;
}