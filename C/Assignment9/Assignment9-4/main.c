/*
Assignment9-4
�й�:2019202003
�̸�:������
*/
#include <stdio.h>
#include <string.h>
#define STR_SIZE 100

int main()
{
    char ans[20];
    char str[STR_SIZE];
    int pass = 0;

    printf("ã���� ������ �Է��ϼ��� : ");
    scanf("%s", ans);

    FILE*fr =fopen("C_Assignment\\C\\Assignment9\\Assignment9-4\\mystery.txt","r");
    if(fr==NULL)
    {
        printf("���� �б� ����!");
        return -1;
    }
    while(fgets(str, STR_SIZE, fr)!=NULL)
    {
        if(strstr(str, ans)!=NULL)
        {
            printf("���ڿ��� ã�ҽ��ϴ�. \n");
            printf("%s", str);
            pass++;
        }
    }
    if(pass==0)
    {
        printf("���ڿ��� ã�� �� �����ϴ�.");
    }
    fclose(fr);

    return 0;
}