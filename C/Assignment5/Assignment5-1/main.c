/*
Assignment5-1
�й�:2019202003
�̸�:������
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

   Student.avg = 80.8;            // ����ü Student�� 
   Student.num = 315;
   strcpy(Student.name, "ȫ�浿");

   Student.score[0] = 82;
   Student.score[1] = 93;
   Student.score[2] = 74;
   Student.score[3] = 90;
   Student.score[4] = 65;

   printf("�й� : %d\n", Student.num);
   printf("�̸� : %s\n", Student.name);
   printf("���� : ");
   for (int i = 0; i < 5; i++)
   {
      printf("%5d", Student.score[i]);
   }
   printf("\n��� : %.1f\n", Student.avg);

   return 0;
}