/*
Assignment5-1
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct
{
   int num;
   char name[20];
   int score[5];
   double avg;
}Student;

int main(void)
{
   Student;

   Student.avg = 80.8;            // 구조체 Student에 
   Student.num = 315;
   strcpy(Student.name, "홍길동");

   Student.score[0] = 82;
   Student.score[1] = 93;
   Student.score[2] = 74;
   Student.score[3] = 90;
   Student.score[4] = 65;

   printf("학번 : %d\n", Student.num);
   printf("이름 : %s\n", Student.name);
   printf("점수 : ");
   for (int i = 0; i < 5; i++)
   {
      printf("%5d", Student.score[i]);
   }
   printf("\n평균 : %.1f\n", Student.avg);

   return 0;
}