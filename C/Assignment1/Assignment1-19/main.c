#include <stdio.h>

int main(void)
{
    printf("나이를 입력하세요 : ");
    int age;
    scanf("%d",&age);
    if(age<7||age>59)       //6세 이하 60세 이상은 값이 무료이며
    {
        printf("무료입니다.\n");
    }
    else                    //그 외는 전부 1000원입니다.
    {
        printf("1000원입니다.\n");
    }
    
    return 0;
}