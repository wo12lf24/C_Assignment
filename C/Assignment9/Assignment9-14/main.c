#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FILENAME_LEN 50

int main()
{
    FILE *fp1 = NULL, *fp2 = NULL;
    char fname1[FILENAME_LEN] = {0};
    char fname2[FILENAME_LEN] = {0};
    char ch, ch1, ch2;

    pritnf("ù��° ���� �̸� : ");
    gets(fname1, FILENAME_LEN);
    fopen_s(&fp1, fname1, "w");
    printf("ù��° ���� ���� �Է�(����� Ctrl + Z) : \n");
    while ((ch = getchar()) != EOF)
        fputc(ch, fp1);


    printf("�ι�° ���� �̸� : ");




    
    return 0;
}
