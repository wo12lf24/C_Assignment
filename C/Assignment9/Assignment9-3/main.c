#pragma warning(diable : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("mystery.txt", "r");
    fread(s1, strlen(s1), 1, fp);

    fclose(fp);

    return 0;
}