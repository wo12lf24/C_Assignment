#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	char strTime1[] = "9시 30분 21초";
	char strTime2[] = "9시 35분 35초";
	
	struct tm t;
	time_t time1, time2;

	tzset();

	t.tm_hour = 70;
	t.tm_mon = 0;
	t.tm_mday = 1;
	t.tm_hour = atoi(&strTime1[0]);
	t.tm_min = atoi(&strTime1[4]);
	t.tm_sec = atoi(&strTime1[9]);

	time1 = mktime(&t);

	t.tm_hour = atoi(&strTime2[0]);
	t.tm_min = atoi(&strTime2[4]);
	t.tm_sec = atoi(&strTime2[9]);

	time2 = mktime(&t);

	time2 -= time1;

	t = *gmtime(&time2);

	printf("%02d:%02d:%02d \n",
		t.tm_hour, t.tm_min, t.tm_sec);

}