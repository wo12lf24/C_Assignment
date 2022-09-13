#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char combi(int num1, int num2)
{
   char rank;
   printf("%d %d\n", num1, num2);
   printf("¥ÁΩ≈¿« ∆–¥¬ ");

   if ((num1 == 33 && num2 == 88) || (num1 == 88 && num2 == 33))
   {
      printf("38±§∂Ø");
   }
   else if ((num1 == 11 && num2 == 33) || (num1 == 33 && num2 == 11))
   {
      printf("13±§∂Ø");
   }
   else if ((num1 == 11 && num2 == 88) || (num1 == 88 && num2 == 11))
   {
      printf("18±§∂Ø");
   }
   else if ((num1 == 44 && num2 == 77) || (num1 == 77 && num2 == 44))
   {
      printf("æœ«‡æÓªÁ");
   }
   else if ((num1 == 44 && num2 == 99) || (num1 == 99 && num2 == 44))
   {
      printf("∏€≈Õ±∏∏Æ ±∏ªÁ");
   }
   else if ((num1 == 44 && num2 == 9) || (num1 == 4 && num2 == 99) || (num1 == 4 && num2 == 9))
   {
      printf("±∏ªÁ");
   }
   else if ((num1 == 1 && num2 == 11) || (num1 == 11 && num2 == 1))
   {
      printf("1∂Ø");
   }
   else if (num1 == 2 && num2 == 2)
   {
      printf("2∂Ø");
   }
   else if ((num1 == 3 && num2 == 33) || (num1 == 33 && num2 == 3))
   {
      printf("3∂Ø");
   }
   else if ((num1 == 4 && num2 == 44) || (num1 == 44 && num2 == 4))
   {
      printf("4∂Ø");
   }
   else if (num1 == 5 && num2 == 5)
   {
      printf("5∂Ø");
   }
   else if (num1 == 6 && num2 == 6)
   {
      printf("6∂Ø");
   }
   else if ((num1 == 7 && num2 == 77) || (num1 == 77 && num2 == 7))
   {
      printf("7∂Ø");
   }
   else if ((num1 == 8 && num2 == 88) || (num1 == 88 && num2 == 8))
   {
      printf("8∂Ø");
   }
   else if ((num1 == 9 && num2 == 99) || (num1 == 99 && num2 == 9))
   {
      printf("9∂Ø");
   }
   else if (num1 == 10 && num2 == 10)
   {
      printf("¿Â∂Ø");
   }
   else if ((num1 == 33 && num2 == 77) || (num1 == 77 && num2 == 33))
   {
      printf("∂Ø¿‚¿Ã");
   }
   else if ((num1 == 1 && num2 == 2) || (num1 == 2 && num2 == 1) || (num1 == 11 && num2 == 2) || (num1 == 2 && num2 == 11))
   {
      printf("æÀ∏Æ");
   }
   else if ((num1 == 1 && num2 == 10) || (num1 == 10 && num2 == 1) || (num1 == 11 && num2 == 10) || (num1 == 10 && num2 == 11))
   {
      printf("¿ÂªÊ");
   }
   else if ((num1 == 1 && num2 == 4) || (num1 == 4 && num2 == 1)
      || (num1 == 11 && num2 == 4) || (num1 == 4 && num2 == 11)
      || (num1 == 1 && num2 == 44) || (num1 == 44 && num2 == 1)
      || (num1 == 11 && num2 == 44) || (num1 == 44 && num2 == 11))
   {
      printf("µ∂ªÁ");
   }
   else if ((num1 == 4 && num2 == 10) || (num1 == 10 && num2 == 4) || (num1 == 44 && num2 == 10) || (num1 == 10 && num2 == 44))
   {
      printf("¿ÂªÁ");
   }
   else if ((num1 == 1 && num2 == 9) || (num1 == 9 && num2 == 1)
      || (num1 == 11 && num2 == 9) || (num1 == 9 && num2 == 11)
      || (num1 == 1 && num2 == 99) || (num1 == 99 && num2 == 1)
      || (num1 == 11 && num2 == 99) || (num1 == 99 && num2 == 11))
   {
      printf("±∏ªÊ");
   }
   else if ((num1 == 4 && num2 == 6) || (num1 == 6 && num2 == 4) || (num1 == 44 && num2 == 6) || (num1 == 6 && num2 == 44))
   {
      printf("ºº∑˙");
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
         printf("∏¡≈Î");
      }
      else if(num3 < 10)
      {
         printf("%d≤˝", num3);
      }
      else
      {
         printf("%d≤˝", num3 % 10);
      }
   }
   printf("¿‘¥œ¥Ÿ.\n");
}


int main(void)
{
   int arr[20] = { 1, 11, 2, 2, 3, 33, 4, 44, 5, 5,
      6, 6, 7, 77, 8, 88, 9, 99, 10, 10 }; // 11, 33, 44, 77, 88, 99¥¬ ∆Øºˆ∆–.

   int num1, num2;
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

   combi(arr[num1], arr[num2]);

   return 0;
}