#pragma warning(diable : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "#�̸� : ȫ�浿\n#�ֹι�ȣ : 900711-1234567\n��ȭ��ȣ : 010-1111-2222";
    FILE *fp = fopen("mystery.txt", "w");
    fwrite(s1, strlen(s1), 1, fp);

    fclose(fp);

    return 0;
}