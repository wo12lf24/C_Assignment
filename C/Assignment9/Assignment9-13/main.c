#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

long GetFileSize(FILE* fr)
{
    long fpos;
    long fsize;

    fpos = ftell(fr);

    fseek(fr, 0, SEEK_END);
    fsize=ftell(fr);

    fseek(fr, fpos, SEEK_SET);

    return fsize;
}

int main()
{
    char str[100];
    FILE*fr=fopen("C_Assignment\\C\\Assignment9\\Assignment9-13\\readme.txt","r");

    printf("������ ũ�� : %ld ����Ʈ\n", GetFileSize(fr));

    fgets(str, 100,fr);
    fputs(str, stdout);
    printf("������ ũ�� : %ld ����Ʈ\n", GetFileSize(fr));

    fgets(str, 100,fr);
    fputs(str, stdout);
    printf("������ ũ�� : %ld ����Ʈ\n", GetFileSize(fr));

    return 0;
}