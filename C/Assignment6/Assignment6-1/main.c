/*
Assignment6-1
�й�:2019202003
�̸�:������
*/
#include <stdio.h>

typedef struct sbox	//����ü
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

typedef union ubox	//����ü
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