#include <stdio.h>

int main(void)
{
    printf("나이를 입력하세요 : ");
    int age;
    scanf("%d",&age);
    if(age<7||age>59)
    {
        printf("무료입니다.\n");
    }
    else
    {
        printf("1000원입니다.\n");
    }
    
    return 0;
}