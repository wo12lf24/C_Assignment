/*
Assignment4-11
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* StrLeft(char* string, int num)
{
	char* copy = NULL;
	for (int i = 0; i < num; i++)
	{
		*(copy + i) = *(string + i);
	}
	return copy;
}
char* StrMid(char* string, int num)
{
	char* copy = NULL;
	int len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	printf("%d", len);
	for (int i = (len / 2) - 1; i < len; i++)
	{
		*(copy + i) = *(string + i);
	}
	return copy;
}
char* StrRight(char* string, int num)
{
	char* copy = NULL;
	int len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i > num; i--)
	{
		*(copy +(len - i - 1)) = *(string + i);
	}
	return copy;
}
void main(void)
{
	char string[100];
	char* p;

	strcpy(string, "abcde");
	p = StrLeft(string, 2);
	puts(p); free(p);

	strcpy(string, "abcde");
	p = StrLeft(string, 2);
	puts(p); free(p);

	strcpy(string, "abcde");
    
	p = StrLeft(string, 2);
	puts(p); free(p);

}