/*
Assignment4-11
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *StrLeft(char *string, int len)
{
	char *p = strdup(string);
	p[len] = 0;
	return p;
}
char *StrMid(char *string, int pos)
{
	return strdup(&string[pos]);
}
char *StrRight(char *string, int len)
{
	int n = strlen(string);
	return strdup(&string[n - len]);
}
void main(void)
{
	char string[100];
	char *p;
	strcpy(string, "abcde");
	p = StrLeft(string, 2);
	puts(p);
	free(p);

	strcpy(string, "abcde");
	p = StrRight(string, 2);
	puts(p);
	free(p);

	strcpy(string, "abcde");
	p = StrMid(string, 2);
	puts(p);
	free(p);
}