/*
Assignment6-1
학번:2019202003
이름:김주형
*/
#include <stdio.h>

typedef struct sbox	//구조체
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

typedef union ubox	//공용체
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void)
{
	SBox sbx;
	UBox ubx;

	printf("%d\n%d", sizeof(sbx), sizeof(ubx));
	return 0;
}