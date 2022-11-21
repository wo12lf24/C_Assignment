#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FILENAME_LEN 50

int main()
{
    FILE *fp1 = NULL, *fp2 = NULL;
    char fname1[FILENAME_LEN] = {0};
    char fname2[FILENAME_LEN] = {0};
    char ch, ch1, ch2;

    pritnf("첫번째 파일 이름 : ");
    gets(fname1, FILENAME_LEN);
    fopen_s(&fp1, fname1, "w");
    printf("첫번째 파일 내용 입력(종료는 Ctrl + Z) : \n");
    while ((ch = getchar()) != EOF)
        fputc(ch, fp1);


    printf("두번째 파일 이름 : ");




    
    return 0;
}
