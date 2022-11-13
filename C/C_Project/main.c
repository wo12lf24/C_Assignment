#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* rank
38광땡: a, 광땡: b, 장땡: C, 땡: c
멍텅구리 구사: X, 구사: Y, 암행어사: x, 땡잡이: y
알리: d, 독사: e, 구삥: f, 장삥: g, 장사: h, 세륙: i, 끗: j
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
      printf("38광땡");
   }
   else if (jokbo == 'b')
   {
      if (*hand_num == 13)
      {
         printf("13광땡");
      }
      else if (*hand_num == 18)
      {
         printf("18광땡");
      }
   }
   else if (jokbo == 'x')
   {
      printf("암행어사");
   }
   else if (jokbo == 'X')
   {
      printf("멍터구리 구사");
   }
   else if (jokbo == 'Y')
   {
      printf("구사");
   }
   else if (jokbo == 'y')
   {
      printf("땡잡이");
   }
   else if (jokbo == 'c')
   {
      printf("%d땡", *hand_num);
   }
   else if (jokbo == 'C')
   {
      printf("장땡");
   }
   else if (jokbo == 'd')
   {
      printf("알리");
   }
   else if (jokbo == 'e')
   {
      printf("독사");
   }
   else if (jokbo == 'f')
   {
      printf("구삥");
   }
   else if (jokbo == 'g')
   {
      printf("장삥");
   }
   else if (jokbo == 'h')
   {
      printf("장사");
   }
   else if (jokbo == 'i')
   {
      printf("세륙");
   }
   else if (jokbo == 'j')
   {
      printf("%d끗", *hand_num);
   }
}
char compare(char user_c, char cpu_c, int hand_num1, int hand_num2)
{
   if (user_c == cpu_c)
   {
      if (user_c == 'c') // user, cpu 모두 땡일 때
      {
         if (hand_num1 > hand_num2) // 땡 앞의 숫자가 user가 높으면 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else // 낮으면 패배(둘다 땡일 경우 같은 경우는 없으므로 무승부는 없다.)
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'j') // user cpu 모두 끗일 때
      {
         if (hand_num1 > hand_num2) // 끗 앞의 숫자가 user가 높으면 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else if (hand_num1 == hand_num2) // 같으면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 낮으면 패배
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else // 땡, 끗 외에 같은 경우는 재경기
      {
         printf("재경기\n");
         return 'D';
      }
   }
   else
   {
      if (user_c == 'a') // 38광땡은 무조건 승리
      {
         printf("유저 승리\n");
         return 'W';
      }
      else if (user_c == 'b') // 광땡인 경우
      {
         if (cpu_c == 'x') // cpu가 암행어사면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else if (cpu_c == 'X') // 멍텅구리 구사인 경우 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 user가 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
      }
      else if (user_c == 'X') // 멍텅구리 구사인 경우
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C') // cpu가 38광땡, 광땡또는 장땡이면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else // 그외엔 재경기
         {
            printf("재경기\n");
            return 'D';
         }
      }
      else if (user_c == 'x') // 암행어사인 경우
      {
         if (cpu_c == 'b' || (cpu_c == 'j' && hand_num2 == 0)) // cpu가 광땡또는 망통이면 user 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else if ((cpu_c == 'j' && hand_num2 == 1) || cpu_c == 'X' || cpu_c == 'Y') // cpu가 1끗, 구사또는 멍텅구리 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 cpu가 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'Y') // 구사인 경우
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c') // cpu가 38광땡, 광땡, 장땡또는 땡이면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else // 그외엔 재경기
         {
            printf("재경기\n");
            return 'D';
         }
      }
      else if (user_c == 'C') // 장땡인 경우
      {
         if (cpu_c == 'a' || cpu_c == 'b') // cpu가 38광땡또는 광땡이면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else // 그외엔 user가 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
      }
      else if (user_c == 'c') // 땡인 경우
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'y') // cpu가 38광땡, 광땡, 장땡또는 땡잡이면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else if (cpu_c == 'X') // cpu가 멍텅구리 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 user가 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
      }
      else if (user_c == 'y') // 땡잡이인 경우
      {
         if (cpu_c == 'c') // cpu가 땡이면 user 승리
         {
            printf("유저 승리\n");
            return 'w';
         }
         else if ((cpu_c == 'j' && hand_num2 == 0) || cpu_c == 'X' || cpu_c == 'Y') // cpu가 망통, 구사또는 멍텅구리 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 user가 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'd') // 알리인 경우
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c') // cpu가 38광땡, 광땡, 장땡또는 땡이면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 user가 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
      }
      else if (user_c == 'e') // 독사인 경우
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c' || cpu_c == 'd') // cpu가 38광땡, 광땡, 장땡, 땡또는 알리면 cpu 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 user가 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
      }
      else if (user_c == 'f') // 구삥인 경우
      {
         if (cpu_c == 'g' || cpu_c == 'h' || cpu_c == 'i' || cpu_c == 'j') // cpu가 장삥, 장사, 세륙또는 끗이면 user 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 cpu가 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'g') // 장삥인 경우
      {
         if (cpu_c == 'h' || cpu_c == 'i' || cpu_c == 'j') // cpu가 장사, 세륙또는 끗이면 user 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 cpu가 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'h') // 장사인 경우
      {
         if (cpu_c == 'i' || cpu_c == 'j') // cpu가 세륙또는 끗이면 user 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 cpu가 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'i') // 세륙인 경우
      {
         if (cpu_c == 'j') // cpu가 끗이면 user 승리
         {
            printf("유저 승리\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y' || cpu_c == 'i') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else // 그외엔 cpu가 승리
         {
            printf("cpu 승리\n");
            return 'L';
         }
      }
      else if (user_c == 'j') // 끗인 경우
      {
         if (cpu_c == 'X' || cpu_c == 'Y') // cpu가 멍텅구리 구사또는 구사면 재경기
         {
            printf("재경기\n");
            return 'D';
         }
         else if (cpu_c == 'x')
         {
            if (hand_num1 > 1)
            {
               printf("유저 승리\n");
               return 'W';
            }
            else if (hand_num1 == 1)
            {
               printf("재경기\n");
               return 'D';
            }
            else
            {
               printf("cpu 승리\n");
               return 'L';
            }
         }
         else if (cpu_c == 'y')
         {
            if (hand_num1 > 0)
            {
               printf("유저 승리\n");
               return 'W';
            }
            else
            {
               printf("재경기\n");
               return 'D';
            }
         }
         else
         {
            printf("cpu 승리\n");
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
   printf("승 : %d번\n패 : %d번\n무 : %d\n승률 : %.1f\n",
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
                  6, 6, 7, 77, 8, 88, 9, 99, 10, 10}; // 11, 33, 44, 77, 88, 99는 특수패(광, 돼지 등등..)
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
   printf("원하시는 난이도를 골라주시기 바랍니다.\n");
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
      if (first == 1) // user가 선패일 때
      {
         printf("당신이 선입니다\n\n");
         printf("당신의 패는\n");
         user_c = combi(arr[num1], arr[num3], phand_num1);
         print_card(user_c, phand_num1);
         printf("입니다.\n\n");
         printf("1. 콜, 2. 다이 : ");
         scanf("%d", &select);
         if (select == 1) // user select call
         {
            printf("CPU가 선택하는중...\n");
            cpu_c = hide_combi(arr[num2], arr[num4], phand_num2);
            if (prob_call_by_level(cpu_c, phand_num2, level) == call)
            {
               printf("CPU CHOOSE CALL\n");
               printf("\nCPU의 패는\n");
               print_card(cpu_c, phand_num2);
               printf("입니다.\n\n");
               WinorLose(&Player, compare(user_c, cpu_c, hand_num1, hand_num2), &first);
            }
            else if (prob_call_by_level(cpu_c, phand_num2, level) == die)
            {
               printf("CPU CHOOSE DIE\n\n");
               printf("user 승리\n");
               WinorLose(&Player, 'W', &first);
            }
         }
         else // user select die
         {
            printf("cpu 승리\n");
            WinorLose(&Player, 'L', &first);
         }
         printf("계속하시려면 1을 그만하려면 2를 눌러주세요.\n");
         scanf("%d", &select);
      }
      else if (first == 0) // cpu가 선패일 때
      {
         printf("cpu가 선입니다\n\n");
         printf("당신의 패는\n");
         user_c = combi(arr[num2], arr[num4], phand_num1);
         printf("입니다.\n\n");
         printf("1. 콜, 2. 다이 : ");
         scanf("%d", &select);
         if (select == 1)
         {
            printf("CPU가 선택하는중...\n\n");
            cpu_c = hide_combi(arr[num1], arr[num3], phand_num2);
            if (prob_call_by_level(cpu_c, phand_num2, level) == call)
            {
               printf("CPU CHOOSE CALL\n");
               printf("\nCPU의 패는\n");
               print_card(cpu_c, phand_num2);
               printf("입니다.\n\n");
               WinorLose(&Player, compare(user_c, cpu_c, hand_num1, hand_num2), &first);
            }
            else if (prob_call_by_level(cpu_c, phand_num2, level) == die)
            {
               printf("CPU CHOOSE DIE\n\n");
               printf("user 승리\n");
               WinorLose(&Player, 'W', &first);
            }
         }
         else
         {
            printf("cpu 승리\n");
            WinorLose(&Player, 'L', &first);
         }
         printf("계속하시려면 1을 그만하려면 2를 눌러주세요.\n");
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