#pragma warning(diable : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "\n#��ܸԴ� ����: «��, ������\n#���: �౸";
    FILE *fp = fopen("C:\\Users\\wo12l\\VScode\\C\\Assignment9\\Assignment9-2\\mystery.txt", "a");
    fwrite(s1, strlen(s1), 1, fp);

    fclose(fp);

    return 0;
}