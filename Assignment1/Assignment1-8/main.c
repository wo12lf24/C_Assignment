#include <stdio.h>

int main(void)
{
    char c;

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);
    if (c == 'M' || c == 'm')
    {
        printf("남자\n");
    }
    else if(c=='F'||c=='f')
    {
        printf("여자\n");
    }
    else
    { }

    return 0;
}  