#include <stdio.h>

int main(void)
{
    int num;
    printf("성적을 입력해주세요 : ");
    scanf("%d", &num);

    switch(num/10)
    {
        case 10:
        case 9: printf("A");
                break;
        case 8: printf("B");
                break;
        case 7: printf("C");
                break;
        case 6: printf("D");
                break; 
        default: printf("F");
                break;
    }
    printf("등급입니다.\n");
    
    return 0;
}