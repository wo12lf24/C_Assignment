#pragma warning(diable : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "#이름 : 홍길동\n#주민번호 : 900711-1234567\n#전화번호 : 010-1111-2222";
    FILE *fp = fopen("C:\\Users\\wo12l\\VScode\\C\\Assignment9\\Assignment9-1\\mystery.txt", "w");
    fwrite(s1, strlen(s1), 1, fp);

    fclose(fp);

    return 0;
}