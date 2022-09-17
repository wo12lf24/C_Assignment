#include <stdio.h>

int main(void)
{
    int num;
    printf("성적을 입력해주세요 : ");
    scanf("%d", &num);

    switch(num/10)
    {
        case 10:
        case 9: printf("A");            //90점 이상은 'A'
                break;
        case 8: printf("B");            //80~89점은 'B'
                break;
        case 7: printf("C");            //70~79점은 'C'
                break;
        case 6: printf("D");            //60~69점은 'D'
                break; 
        default: printf("F");           //59점 이하는 'E'
                break;
    }
    printf("등급입니다.\n");
    
    return 0;
}