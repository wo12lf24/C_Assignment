/*
Assignment5-6
학번:2019202003
이름:김주형
*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
    char strTime[] = "20060515090507";

    struct tm t;
    time_t time;

    t.tm_sec = atoi(&strTime[12]);
    strTime[12] = '\0';

    t.tm_min = atoi(&strTime[10]);
    strTime[10] = '\0';

    t.tm_hour = atoi(&strTime[8]);
    strTime[8] = '\0';

    t.tm_mday = atoi(&strTime[6]);
    strTime[6] = '\0';

    t.tm_mon = atoi(&strTime[4]) -1;
    strTime[4] = '\0';

    t.tm_year = atoi(&strTime[0])-1900;

    time = mktime(&t);

     printf("%4d/%02d/%02d %02d:%02d:%02d \n",
        t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, 
        t.tm_hour, t.tm_min, t.tm_sec);
}