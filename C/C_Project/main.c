#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* rank
38����: a, ����: b, �嶯: C, ��: c
���ֱ��� ����: X, ����: Y, ������: x, ������: y
�˸�: d, ����: e, ����: f, ���: g, ���: h, ����: i, ��: j
*/
char combi(int num1, int num2, int *hand_num)
{
   char rank;
   printf("%d %d\n", num1, num2);

   if ((num1 == 33 && num2 == 88) || (num1 == 88 && num2 == 33))
   {
      return 'a';
   }
   else if ((num1 == 11 && num2 == 33) || (num1 == 33 && num2 == 11))
   {
      *hand_num = 13;
      return 'b';
   }
   else if ((num1 == 11 && num2 == 88) || (num1 == 88 && num2 == 11))
   {
      *hand_num = 18;
      return 'b';
   }
   else if ((num1 == 44 && num2 == 77) || (num1 == 77 && num2 == 44))
   {
      return 'x';
   }
   else if ((num1 == 44 && num2 == 99) || (num1 == 99 && num2 == 44))
   {
      return 'X';
   }
   else if ((num1 == 44 && num2 == 9) || (num1 == 4 && num2 == 99) || (num1 == 4 && num2 == 9))
   {
      return 'Y';
   }
   else if ((num1 == 1 && num2 == 11) || (num1 == 11 && num2 == 1))
   {
      *hand_num = 1;
      return 'c';
   }
   else if (num1 == 2 && num2 == 2)
   {
      *hand_num = 2;
      return 'c';
   }
   else if ((num1 == 3 && num2 == 33) || (num1 == 33 && num2 == 3))
   {
      *hand_num = 3;
      return 'c';
   }
   else if ((num1 == 4 && num2 == 44) || (num1 == 44 && num2 == 4))
   {
      *hand_num = 4;
      return 'c';
   }
   else if (num1 == 5 && num2 == 5)
   {
      *hand_num = 5;
      return 'c';
   }
   else if (num1 == 6 && num2 == 6)
   {
      *hand_num = 6;
      return 'c';
   }
   else if ((num1 == 7 && num2 == 77) || (num1 == 77 && num2 == 7))
   {
      *hand_num = 7;
      return 'c';
   }
   else if ((num1 == 8 && num2 == 88) || (num1 == 88 && num2 == 8))
   {
      *hand_num = 8;
      return 'c';
   }
   else if ((num1 == 9 && num2 == 99) || (num1 == 99 && num2 == 9))
   {
      *hand_num = 9;
      return 'c';
   }
   else if (num1 == 10 && num2 == 10)
   {
      return 'C';
   }
   else if ((num1 == 33 && num2 == 77) || (num1 == 77 && num2 == 33))
   {
      return 'y';
   }
   else if ((num1 == 1 && num2 == 2) || (num1 == 2 && num2 == 1) || (num1 == 11 && num2 == 2) || (num1 == 2 && num2 == 11))
   {
      return 'd';
   }
   else if ((num1 == 1 && num2 == 10) || (num1 == 10 && num2 == 1) || (num1 == 11 && num2 == 10) || (num1 == 10 && num2 == 11))
   {
      return 'g';
   }
   else if ((num1 == 1 && num2 == 4) || (num1 == 4 && num2 == 1) || (num1 == 11 && num2 == 4) || (num1 == 4 && num2 == 11) || (num1 == 1 && num2 == 44) || (num1 == 44 && num2 == 1) || (num1 == 11 && num2 == 44) || (num1 == 44 && num2 == 11))
   {
      return 'e';
   }
   else if ((num1 == 4 && num2 == 10) || (num1 == 10 && num2 == 4) || (num1 == 44 && num2 == 10) || (num1 == 10 && num2 == 44))
   {
      return 'h';
   }
   else if ((num1 == 1 && num2 == 9) || (num1 == 9 && num2 == 1) || (num1 == 11 && num2 == 9) || (num1 == 9 && num2 == 11) || (num1 == 1 && num2 == 99) || (num1 == 99 && num2 == 1) || (num1 == 11 && num2 == 99) || (num1 == 99 && num2 == 11))
   {
      return 'f';
   }
   else if ((num1 == 4 && num2 == 6) || (num1 == 6 && num2 == 4) || (num1 == 44 && num2 == 6) || (num1 == 6 && num2 == 44))
   {
      return 'i';
   }
   else
   {
      if (num1 > 10)
      {
         num1 = num1 % 10;
      }
      if (num2 > 10)
      {
         num2 = num2 % 10;
      }
      int num3 = num1 + num2;
      if (num3 == 10)
      {
         *hand_num = 0;
      }
      else if (num3 < 10)
      {
         *hand_num = num3;
      }
      else
      {
         *hand_num = (num3 % 10);
      }
   }
   return 'j';
}
char hide_combi(int num1, int num2, int *hand_num)
{
   char rank;

   if ((num1 == 33 && num2 == 88) || (num1 == 88 && num2 == 33))
   {
      return 'a';
   }
   else if ((num1 == 11 && num2 == 33) || (num1 == 33 && num2 == 11))
   {
      *hand_num = 13;
      return 'b';
   }
   else if ((num1 == 11 && num2 == 88) || (num1 == 88 && num2 == 11))
   {
      *hand_num = 18;
      return 'b';
   }
   else if ((num1 == 44 && num2 == 77) || (num1 == 77 && num2 == 44))
   {
      return 'x';
   }
   else if ((num1 == 44 && num2 == 99) || (num1 == 99 && num2 == 44))
   {
      return 'X';
   }
   else if ((num1 == 44 && num2 == 9) || (num1 == 4 && num2 == 99) || (num1 == 4 && num2 == 9))
   {
      return 'Y';
   }
   else if ((num1 == 1 && num2 == 11) || (num1 == 11 && num2 == 1))
   {
      *hand_num = 1;
      return 'c';
   }
   else if (num1 == 2 && num2 == 2)
   {
      *hand_num = 2;
      return 'c';
   }
   else if ((num1 == 3 && num2 == 33) || (num1 == 33 && num2 == 3))
   {
      *hand_num = 3;
      return 'c';
   }
   else if ((num1 == 4 && num2 == 44) || (num1 == 44 && num2 == 4))
   {
      *hand_num = 4;
      return 'c';
   }
   else if (num1 == 5 && num2 == 5)
   {
      *hand_num = 5;
      return 'c';
   }
   else if (num1 == 6 && num2 == 6)
   {
      *hand_num = 6;
      return 'c';
   }
   else if ((num1 == 7 && num2 == 77) || (num1 == 77 && num2 == 7))
   {
      *hand_num = 7;
      return 'c';
   }
   else if ((num1 == 8 && num2 == 88) || (num1 == 88 && num2 == 8))
   {
      *hand_num = 8;
      return 'c';
   }
   else if ((num1 == 9 && num2 == 99) || (num1 == 99 && num2 == 9))
   {
      *hand_num = 9;
      return 'c';
   }
   else if (num1 == 10 && num2 == 10)
   {
      return 'C';
   }
   else if ((num1 == 33 && num2 == 77) || (num1 == 77 && num2 == 33))
   {
      return 'y';
   }
   else if ((num1 == 1 && num2 == 2) || (num1 == 2 && num2 == 1) || (num1 == 11 && num2 == 2) || (num1 == 2 && num2 == 11))
   {
      return 'd';
   }
   else if ((num1 == 1 && num2 == 10) || (num1 == 10 && num2 == 1) || (num1 == 11 && num2 == 10) || (num1 == 10 && num2 == 11))
   {
      return 'g';
   }
   else if ((num1 == 1 && num2 == 4) || (num1 == 4 && num2 == 1) || (num1 == 11 && num2 == 4) || (num1 == 4 && num2 == 11) || (num1 == 1 && num2 == 44) || (num1 == 44 && num2 == 1) || (num1 == 11 && num2 == 44) || (num1 == 44 && num2 == 11))
   {
      return 'e';
   }
   else if ((num1 == 4 && num2 == 10) || (num1 == 10 && num2 == 4) || (num1 == 44 && num2 == 10) || (num1 == 10 && num2 == 44))
   {
      return 'h';
   }
   else if ((num1 == 1 && num2 == 9) || (num1 == 9 && num2 == 1) || (num1 == 11 && num2 == 9) || (num1 == 9 && num2 == 11) || (num1 == 1 && num2 == 99) || (num1 == 99 && num2 == 1) || (num1 == 11 && num2 == 99) || (num1 == 99 && num2 == 11))
   {
      return 'f';
   }
   else if ((num1 == 4 && num2 == 6) || (num1 == 6 && num2 == 4) || (num1 == 44 && num2 == 6) || (num1 == 6 && num2 == 44))
   {
      return 'i';
   }
   else
   {
      if (num1 > 10)
      {
         num1 = num1 % 10;
      }
      if (num2 > 10)
      {
         num2 = num2 % 10;
      }
      int num3 = num1 + num2;
      if (num3 == 10)
      {
         *hand_num = 0;
      }
      else if (num3 < 10)
      {
         *hand_num = num3;
      }
      else
      {
         *hand_num = (num3 % 10);
      }
   }
   return 'j';
}
void print_card(char jokbo, int *hand_num)
{
   if (jokbo == 'a')
   {
      printf("38����");
   }
   else if (jokbo == 'b')
   {
      if (*hand_num == 13)
      {
         printf("13����");
      }
      else if (*hand_num == 18)
      {
         printf("18����");
      }
   }
   else if (jokbo == 'x')
   {
      printf("������");
   }
   else if (jokbo == 'X')
   {
      printf("���ͱ��� ����");
   }
   else if (jokbo == 'Y')
   {
      printf("����");
   }
   else if (jokbo == 'y')
   {
      printf("������");
   }
   else if (jokbo == 'c')
   {
      printf("%d��", *hand_num);
   }
   else if (jokbo == 'C')
   {
      printf("�嶯");
   }
   else if (jokbo == 'd')
   {
      printf("�˸�");
   }
   else if (jokbo == 'e')
   {
      printf("����");
   }
   else if (jokbo == 'f')
   {
      printf("����");
   }
   else if (jokbo == 'g')
   {
      printf("���");
   }
   else if (jokbo == 'h')
   {
      printf("���");
   }
   else if (jokbo == 'i')
   {
      printf("����");
   }
   else if (jokbo == 'j')
   {
      printf("%d��", *hand_num);
   }
}
char compare(char user_c, char cpu_c, int hand_num1, int hand_num2)
{
   if (user_c == cpu_c)
   {
      if (user_c == 'c') // user, cpu ��� ���� ��
      {
         if (hand_num1 > hand_num2) // �� ���� ���ڰ� user�� ������ �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else // ������ �й�(�Ѵ� ���� ��� ���� ���� �����Ƿ� ���ºδ� ����.)
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'j') // user cpu ��� ���� ��
      {
         if (hand_num1 > hand_num2) // �� ���� ���ڰ� user�� ������ �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else if (hand_num1 == hand_num2) // ������ ����
         {
            printf("����\n");
            return 'D';
         }
         else // ������ �й�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else // ��, �� �ܿ� ���� ���� ����
      {
         printf("����\n");
         return 'D';
      }
   }
   else
   {
      if (user_c == 'a') // 38������ ������ �¸�
      {
         printf("���� �¸�\n");
         return 'W';
      }
      else if (user_c == 'b') // ������ ���
      {
         if (cpu_c == 'x') // cpu�� ������� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else if (cpu_c == 'X') // ���ֱ��� ������ ��� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� user�� �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
      }
      else if (user_c == 'X') // ���ֱ��� ������ ���
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C') // cpu�� 38����, �����Ǵ� �嶯�̸� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else // �׿ܿ� ����
         {
            printf("����\n");
            return 'D';
         }
      }
      else if (user_c == 'x') // �������� ���
      {
         if (cpu_c == 'b' || (cpu_c == 'j' && hand_num2 == 0)) // cpu�� �����Ǵ� �����̸� user �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else if ((cpu_c == 'j' && hand_num2 == 1) || cpu_c == 'X' || cpu_c == 'Y') // cpu�� 1��, ����Ǵ� ���ֱ��� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� cpu�� �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'Y') // ������ ���
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c') // cpu�� 38����, ����, �嶯�Ǵ� ���̸� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else // �׿ܿ� ����
         {
            printf("����\n");
            return 'D';
         }
      }
      else if (user_c == 'C') // �嶯�� ���
      {
         if (cpu_c == 'a' || cpu_c == 'b') // cpu�� 38�����Ǵ� �����̸� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else // �׿ܿ� user�� �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
      }
      else if (user_c == 'c') // ���� ���
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'y') // cpu�� 38����, ����, �嶯�Ǵ� �����̸� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else if (cpu_c == 'X') // cpu�� ���ֱ��� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� user�� �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
      }
      else if (user_c == 'y') // �������� ���
      {
         if (cpu_c == 'c') // cpu�� ���̸� user �¸�
         {
            printf("���� �¸�\n");
            return 'w';
         }
         else if ((cpu_c == 'j' && hand_num2 == 0) || cpu_c == 'X' || cpu_c == 'Y') // cpu�� ����, ����Ǵ� ���ֱ��� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� user�� �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'd') // �˸��� ���
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c') // cpu�� 38����, ����, �嶯�Ǵ� ���̸� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� user�� �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
      }
      else if (user_c == 'e') // ������ ���
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c' || cpu_c == 'd') // cpu�� 38����, ����, �嶯, ���Ǵ� �˸��� cpu �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� user�� �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
      }
      else if (user_c == 'f') // ������ ���
      {
         if (cpu_c == 'g' || cpu_c == 'h' || cpu_c == 'i' || cpu_c == 'j') // cpu�� ���, ���, �����Ǵ� ���̸� user �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� cpu�� �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'g') // ����� ���
      {
         if (cpu_c == 'h' || cpu_c == 'i' || cpu_c == 'j') // cpu�� ���, �����Ǵ� ���̸� user �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� cpu�� �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'h') // ����� ���
      {
         if (cpu_c == 'i' || cpu_c == 'j') // cpu�� �����Ǵ� ���̸� user �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� cpu�� �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'i') // ������ ���
      {
         if (cpu_c == 'j') // cpu�� ���̸� user �¸�
         {
            printf("���� �¸�\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y' || cpu_c == 'i') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else // �׿ܿ� cpu�� �¸�
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
      else if (user_c == 'j') // ���� ���
      {
         if (cpu_c == 'X' || cpu_c == 'Y') // cpu�� ���ֱ��� ����Ǵ� ����� ����
         {
            printf("����\n");
            return 'D';
         }
         else if (cpu_c == 'x')
         {
            if (hand_num1 > 1)
            {
               printf("���� �¸�\n");
               return 'W';
            }
            else if (hand_num1 == 1)
            {
               printf("����\n");
               return 'D';
            }
            else
            {
               printf("cpu �¸�\n");
               return 'L';
            }
         }
         else if (cpu_c == 'y')
         {
            if (hand_num1 > 0)
            {
               printf("���� �¸�\n");
               return 'W';
            }
            else
            {
               printf("����\n");
               return 'D';
            }
         }
         else
         {
            printf("cpu �¸�\n");
            return 'L';
         }
      }
   }
}

typedef struct
{
   char ID;
   int win, draw, lose;

} User;

void Init(User *Player)
{
   Player->win = 0;
   Player->draw = 0;
   Player->lose = 0;
}
void WinorLose(User *Player, char compare, int *first)
{
   if (compare == 'W')
   {
      Player->win++;
      *first = 1;
   }
   else if (compare == 'D')
   {
      Player->draw++;
   }
   else
   {
      Player->lose++;
      *first = 0;
   }
}
void WDL(User *Player)
{
   float win = Player->win;
   float lose = Player->lose;

   float win_rate = (win) / (win + lose);
   printf("�� : %d��\n�� : %d��\n�� : %d\n�·� : %.1f\n",
          Player->win, Player->lose, Player->draw, 100 * win_rate);
}

char prob_call_by_level(char cpu_c, int *hand_num, int level) // return c(call) or d(die)
{
   int num = 0;
   char call = 'c';
   char die = 'd';
   srand(time(0));
   num = rand() % 100;
   if (level == 1)
   {
      if (cpu_c == 'a' || cpu_c == 'X' || cpu_c == 'Y')
      {
         return call;
      }
      else if (cpu_c == 'b')
      {
         if (num >= 10)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'c')
      {
         if (*hand_num == 9 || *hand_num == 8 || *hand_num == 7)
         {
            if (num >= 15)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 6 || *hand_num == 5 || *hand_num == 4)
         {
            if (num >= 18)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 3 || *hand_num == 2 || *hand_num == 1)
         {
            if (num >= 20)
            {
               return call;
            }
            return die;
         }
      }
      else if (cpu_c == 'd')
      {
         if (num >= 25)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'e')
      {
         if (num >= 26)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'f')
      {
         if (num >= 27)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'g')
      {
         if (num >= 28)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'h')
      {
         if (num >= 29)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'i')
      {
         if (num >= 30)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'j')
      {
         if (*hand_num == 9 || *hand_num == 8 || *hand_num == 7)
         {
            if (num >= 40)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 6 || *hand_num == 5 || *hand_num == 4)
         {
            if (num >= 45)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 3 || *hand_num == 2 || *hand_num == 1)
         {
            if (num >= 60)
            {
               return call;
            }
            return die;
         }
         else
         {
            if (num >= 90)
            {
               return call;
            }
            return die;
         }
      }
      else if (cpu_c == 'x' || cpu_c == 'y')
      {
         if (num >= 90)
         {
            return call;
         }
         return die;
      }
   }
   else if (level == 2)
   {
      if (cpu_c == 'a' || cpu_c == 'X' || cpu_c == 'Y')
      {
         return call;
      }
      else if (cpu_c == 'b')
      {
         if (num >= 10)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'c')
      {
         if (*hand_num == 9 || *hand_num == 8 || *hand_num == 7)
         {
            if (num >= 15)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 6 || *hand_num == 5 || *hand_num == 4)
         {
            if (num >= 18)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 3 || *hand_num == 2 || *hand_num == 1)
         {
            if (num >= 20)
            {
               return call;
            }
            return die;
         }
      }
      else if (cpu_c == 'd')
      {
         if (num >= 25)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'e')
      {
         if (num >= 26)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'f')
      {
         if (num >= 27)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'g')
      {
         if (num >= 28)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'h')
      {
         if (num >= 29)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'i')
      {
         if (num >= 30)
         {
            return call;
         }
         return die;
      }
      else if (cpu_c == 'j')
      {
         if (*hand_num == 9 || *hand_num == 8 || *hand_num == 7)
         {
            if (num >= 40)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 6 || *hand_num == 5 || *hand_num == 4)
         {
            if (num >= 45)
            {
               return call;
            }
            return die;
         }
         else if (*hand_num == 3 || *hand_num == 2 || *hand_num == 1)
         {
            if (num >= 60)
            {
               return call;
            }
            return die;
         }
         else
         {
            if (num >= 90)
            {
               return call;
            }
            return die;
         }
      }
      else if (cpu_c == 'x' || cpu_c == 'y')
      {
         if (num >= 90)
         {
            return call;
         }
         return die;
      }
   }
}

int main(void)
{
   User Player;
   Init(&Player);

   int arr[20] = {1, 11, 2, 2, 3, 33, 4, 44, 5, 5,
                  6, 6, 7, 77, 8, 88, 9, 99, 10, 10}; // 11, 33, 44, 77, 88, 99�� Ư����(��, ���� ���..)
   int level;
   int num1, num2;
   int num3, num4;
   char user_c, cpu_c;
   int hand_num1, hand_num2;
   int *phand_num1 = &hand_num1;
   int *phand_num2 = &hand_num2;
   int select = 1;
   int first = 1;
   char call = 'c', die = 'd';
   printf("���Ͻô� ���̵��� ����ֽñ� �ٶ��ϴ�.\n");
   printf("1. normal, 2. hard");
   scanf("%d", &level);
   while (select == 1)
   {
      srand(time(0));
      num1 = rand() % 20;
      while (1)
      {
         num2 = rand() % 20;
         if (num1 == num2)
         {
            continue;
         }
         else
         {
            break;
         }
      }
      while (1)
      {
         num3 = rand() % 20;
         if (num3 == num1 || num3 == num2)
         {
            continue;
         }
         else
         {
            break;
         }
      }
      while (1)
      {
         num4 = rand() % 20;
         if (num4 == num1 || num4 == num2 || num4 == num3)
         {
            continue;
         }
         else
         {
            break;
         }
      }
      if (first == 1) // user�� ������ ��
      {
         printf("����� ���Դϴ�\n\n");
         printf("����� �д�\n");
         user_c = combi(arr[num1], arr[num3], phand_num1);
         print_card(user_c, phand_num1);
         printf("�Դϴ�.\n\n");
         printf("1. ��, 2. ���� : ");
         scanf("%d", &select);
         if (select == 1) // user select call
         {
            printf("CPU�� �����ϴ���...\n");
            cpu_c = hide_combi(arr[num2], arr[num4], phand_num2);
            if (prob_call_by_level(cpu_c, phand_num2, level) == call)
            {
               printf("CPU CHOOSE CALL\n");
               printf("\nCPU�� �д�\n");
               print_card(cpu_c, phand_num2);
               printf("�Դϴ�.\n\n");
               WinorLose(&Player, compare(user_c, cpu_c, hand_num1, hand_num2), &first);
            }
            else if (prob_call_by_level(cpu_c, phand_num2, level) == die)
            {
               printf("CPU CHOOSE DIE\n\n");
               printf("user �¸�\n");
               WinorLose(&Player, 'W', &first);
            }
         }
         else // user select die
         {
            printf("cpu �¸�\n");
            WinorLose(&Player, 'L', &first);
         }
         printf("����Ͻ÷��� 1�� �׸��Ϸ��� 2�� �����ּ���.\n");
         scanf("%d", &select);
      }
      else if (first == 0) // cpu�� ������ ��
      {
         printf("cpu�� ���Դϴ�\n\n");
         printf("����� �д�\n");
         user_c = combi(arr[num2], arr[num4], phand_num1);
         printf("�Դϴ�.\n\n");
         printf("1. ��, 2. ���� : ");
         scanf("%d", &select);
         if (select == 1)
         {
            printf("CPU�� �����ϴ���...\n\n");
            cpu_c = hide_combi(arr[num1], arr[num3], phand_num2);
            if (prob_call_by_level(cpu_c, phand_num2, level) == call)
            {
               printf("CPU CHOOSE CALL\n");
               printf("\nCPU�� �д�\n");
               print_card(cpu_c, phand_num2);
               printf("�Դϴ�.\n\n");
               WinorLose(&Player, compare(user_c, cpu_c, hand_num1, hand_num2), &first);
            }
            else if (prob_call_by_level(cpu_c, phand_num2, level) == die)
            {
               printf("CPU CHOOSE DIE\n\n");
               printf("user �¸�\n");
               WinorLose(&Player, 'W', &first);
            }
         }
         else
         {
            printf("cpu �¸�\n");
            WinorLose(&Player, 'L', &first);
         }
         printf("����Ͻ÷��� 1�� �׸��Ϸ��� 2�� �����ּ���.\n");
         scanf("%d", &select);
      }
      else
      {
         continue;
      }
   }
   WDL(&Player);
   return 0;
}