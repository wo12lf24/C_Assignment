/*
Assignment5-5
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
    char strTime[] = "2006/05/15 09:05:07";

    char* token;
    struct tm t;
    time_t time;

    token = strtok(strTime, "/ : ");
    t.tm_year = atoi(token) - 1900;

    token = strtok(NULL, "/ : ");
    t.tm_mon = atoi(token) - 1;

    token = strtok(NULL, "/ : ");
    t.tm_mday = atoi(token);

    token = strtok(NULL, "/ : ");
    t.tm_hour = atoi(token);

    token = strtok(NULL, "/ : ");
    t.tm_min = atoi(token);

    token = strtok(NULL, "/ : ");
    t.tm_sec = atoi(token);

    time = mktime(&t);

    printf("%4d/%02d/%02d %02d:%02d:%02d \n",
        t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, 
        t.tm_hour, t.tm_min, t.tm_sec);
}