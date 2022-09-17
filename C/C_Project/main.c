#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char combi(int num1, int num2, int *hand_num)
{
   char rank;
   printf("%d %d\n", num1, num2);

   if ((num1 == 33 && num2 == 88) || (num1 == 88 && num2 == 33))
   {
      printf("38±¤¶¯");
      return 'a';
   }
   else if ((num1 == 11 && num2 == 33) || (num1 == 33 && num2 == 11))
   {
      printf("13±¤¶¯");
      return 'b';
   }
   else if ((num1 == 11 && num2 == 88) || (num1 == 88 && num2 == 11))
   {
      printf("18±¤¶¯");
      return 'b';
   }
   else if ((num1 == 44 && num2 == 77) || (num1 == 77 && num2 == 44))
   {
      printf("¾ÏÇà¾î»ç");
      return 'x';
   }
   else if ((num1 == 44 && num2 == 99) || (num1 == 99 && num2 == 44))
   {
      printf("¸ÛÅÍ±¸¸® ±¸»ç");
      return 'X';
   }
   else if ((num1 == 44 && num2 == 9) || (num1 == 4 && num2 == 99) || (num1 == 4 && num2 == 9))
   {
      printf("±¸»ç");
      return 'Y';
   }
   else if ((num1 == 1 && num2 == 11) || (num1 == 11 && num2 == 1))
   {
      printf("1¶¯");
      *hand_num = 1;
      return 'c';
   }
   else if (num1 == 2 && num2 == 2)
   {
      printf("2¶¯");
      *hand_num = 2;
      return 'c';
   }
   else if ((num1 == 3 && num2 == 33) || (num1 == 33 && num2 == 3))
   {
      printf("3¶¯");
      *hand_num = 3;
      return 'c';
   }
   else if ((num1 == 4 && num2 == 44) || (num1 == 44 && num2 == 4))
   {
      printf("4¶¯");
      *hand_num = 4;
      return 'c';
   }
   else if (num1 == 5 && num2 == 5)
   {
      printf("5¶¯");
      *hand_num = 5;
      return 'c';
   }
   else if (num1 == 6 && num2 == 6)
   {
      printf("6¶¯");
      *hand_num = 6;
      return 'c';
   }
   else if ((num1 == 7 && num2 == 77) || (num1 == 77 && num2 == 7))
   {
      printf("7¶¯");
      *hand_num = 7;
      return 'c';
   }
   else if ((num1 == 8 && num2 == 88) || (num1 == 88 && num2 == 8))
   {
      printf("8¶¯");
      *hand_num = 8;
      return 'c';
   }
   else if ((num1 == 9 && num2 == 99) || (num1 == 99 && num2 == 9))
   {
      printf("9¶¯");
      *hand_num = 9;
      return 'c';
   }
   else if (num1 == 10 && num2 == 10)
   {
      printf("Àå¶¯");
      return 'C';
   }
   else if ((num1 == 33 && num2 == 77) || (num1 == 77 && num2 == 33))
   {
      printf("¶¯ÀâÀÌ");
      return 'y';
   }
   else if ((num1 == 1 && num2 == 2) || (num1 == 2 && num2 == 1) || (num1 == 11 && num2 == 2) || (num1 == 2 && num2 == 11))
   {
      printf("¾Ë¸®");
      return 'd';
   }
   else if ((num1 == 1 && num2 == 10) || (num1 == 10 && num2 == 1) || (num1 == 11 && num2 == 10) || (num1 == 10 && num2 == 11))
   {
      printf("Àå»æ");
      return 'g';
   }
   else if ((num1 == 1 && num2 == 4) || (num1 == 4 && num2 == 1) || (num1 == 11 && num2 == 4) || (num1 == 4 && num2 == 11) || (num1 == 1 && num2 == 44) || (num1 == 44 && num2 == 1) || (num1 == 11 && num2 == 44) || (num1 == 44 && num2 == 11))
   {
      printf("µ¶»ç");
      return 'e';
   }
   else if ((num1 == 4 && num2 == 10) || (num1 == 10 && num2 == 4) || (num1 == 44 && num2 == 10) || (num1 == 10 && num2 == 44))
   {
      printf("Àå»ç");
      return 'h';
   }
   else if ((num1 == 1 && num2 == 9) || (num1 == 9 && num2 == 1) || (num1 == 11 && num2 == 9) || (num1 == 9 && num2 == 11) || (num1 == 1 && num2 == 99) || (num1 == 99 && num2 == 1) || (num1 == 11 && num2 == 99) || (num1 == 99 && num2 == 11))
   {
      printf("±¸»æ");
      return 'f';
   }
   else if ((num1 == 4 && num2 == 6) || (num1 == 6 && num2 == 4) || (num1 == 44 && num2 == 6) || (num1 == 6 && num2 == 44))
   {
      printf("¼¼·ú");
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
         printf("¸ÁÅë");
         *hand_num = 0;
      }
      else if (num3 < 10)
      {
         printf("%d²ı", num3);
         *hand_num = num3;
      }
      else
      {
         printf("%d²ı", num3 % 10);
         *hand_num = (num3 % 10);
      }
   }
   return 'j';
}
/* rank
38±¤¶¯: a, ±¤¶¯: b, Àå¶¯: C, ¶¯: c
¸ÛÅÖ±¸¸® ±¸»ç: X, ±¸»ç: Y, ¾ÏÇà¾î»ç: x, ¶¯ÀâÀÌ: y
¾Ë¸®: d, µ¶»ç: e, ±¸»æ: f, Àå»æ: g, Àå»ç: h, ¼¼·ú: i, ²ı: j
*/
char compare(char user_c, char cpu_c, int hand_num1, int hand_num2)
{
   if (user_c == cpu_c)
   {
      if (user_c == 'c') // user, cpu ¸ğµÎ ¶¯ÀÏ ¶§
      {
         if (hand_num1 > hand_num2) // ¶¯ ¾ÕÀÇ ¼ıÀÚ°¡ user°¡ ³ôÀ¸¸é ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else // ³·À¸¸é ÆĞ¹è(µÑ´Ù ¶¯ÀÏ °æ¿ì °°Àº °æ¿ì´Â ¾øÀ¸¹Ç·Î ¹«½ÂºÎ´Â ¾ø´Ù.)
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if (user_c == 'j') // user cpu ¸ğµÎ ²ıÀÏ ¶§
      {
         if (hand_num1 > hand_num2) // ²ı ¾ÕÀÇ ¼ıÀÚ°¡ user°¡ ³ôÀ¸¸é ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else if (hand_num1 == hand_num2) // °°À¸¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ³·À¸¸é ÆĞ¹è
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else // ¶¯, ²ı ¿Ü¿¡ °°Àº °æ¿ì´Â Àç°æ±â
      {
         printf("Àç°æ±â\n");
         return 'D';
      }
   }
   else
   {
      if (user_c == 'a') // 38±¤¶¯Àº ¹«Á¶°Ç ½Â¸®
      {
         printf("À¯Àú ½Â¸®\n");
         return 'W';
      }
      else if (user_c == 'b') // ±¤¶¯ÀÎ °æ¿ì
      {
         if (cpu_c == 'x') // cpu°¡ ¾ÏÇà¾î»ç¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else if (cpu_c == 'X') // ¸ÛÅÖ±¸¸® ±¸»çÀÎ °æ¿ì Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ user°¡ ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
      }
      else if (user_c == 'X') // ¸ÛÅÖ±¸¸® ±¸»çÀÎ °æ¿ì
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C') // cpu°¡ 38±¤¶¯, ±¤¶¯¶Ç´Â Àå¶¯ÀÌ¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else // ±×¿Ü¿£ Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
      }
      else if (user_c == 'x') // ¾ÏÇà¾î»çÀÎ °æ¿ì
      {
         if (cpu_c == 'b' || (cpu_c == 'j' && hand_num2 == 0)) // cpu°¡ ±¤¶¯¶Ç´Â ¸ÁÅëÀÌ¸é user ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else if ((cpu_c == 'j' && hand_num2 == 1) || cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ 1²ı, ±¸»ç¶Ç´Â ¸ÛÅÖ±¸¸® ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ cpu°¡ ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if (user_c == 'Y') // ±¸»çÀÎ °æ¿ì
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c') // cpu°¡ 38±¤¶¯, ±¤¶¯, Àå¶¯¶Ç´Â ¶¯ÀÌ¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else // ±×¿Ü¿£ Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
      }
      else if (user_c == 'C') // Àå¶¯ÀÎ °æ¿ì
      {
         if (cpu_c == 'a' || cpu_c == 'b') // cpu°¡ 38±¤¶¯¶Ç´Â ±¤¶¯ÀÌ¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else // ±×¿Ü¿£ user°¡ ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
      }
      else if (user_c == 'c') // ¶¯ÀÎ °æ¿ì
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'y') // cpu°¡ 38±¤¶¯, ±¤¶¯, Àå¶¯¶Ç´Â ¶¯ÀâÀÌ¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else if (cpu_c == 'X') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ user°¡ ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
      }
      else if (user_c == 'y') // ¶¯ÀâÀÌÀÎ °æ¿ì
      {
         if (cpu_c == 'c') // cpu°¡ ¶¯ÀÌ¸é user ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'w';
         }
         else if ((cpu_c == 'j' && hand_num2 == 0) || cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÁÅë, ±¸»ç¶Ç´Â ¸ÛÅÖ±¸¸® ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ user°¡ ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if (user_c == 'd') // ¾Ë¸®ÀÎ °æ¿ì
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c') // cpu°¡ 38±¤¶¯, ±¤¶¯, Àå¶¯¶Ç´Â ¶¯ÀÌ¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ user°¡ ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
      }
      else if (user_c == 'e') // µ¶»çÀÎ °æ¿ì
      {
         if (cpu_c == 'a' || cpu_c == 'b' || cpu_c == 'C' || cpu_c == 'c' || cpu_c == 'd') // cpu°¡ 38±¤¶¯, ±¤¶¯, Àå¶¯, ¶¯¶Ç´Â ¾Ë¸®¸é cpu ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ user°¡ ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
      }
      else if (user_c == 'f') // ±¸»æÀÎ °æ¿ì
      {
         if (cpu_c == 'g' || cpu_c == 'h' || cpu_c == 'i' || cpu_c == 'j') // cpu°¡ Àå»æ, Àå»ç, ¼¼·ú¶Ç´Â ²ıÀÌ¸é user ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ cpu°¡ ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if (user_c == 'g') // Àå»æÀÎ °æ¿ì
      {
         if (cpu_c == 'h' || cpu_c == 'i' || cpu_c == 'j') // cpu°¡ Àå»ç, ¼¼·ú¶Ç´Â ²ıÀÌ¸é user ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ cpu°¡ ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if (user_c == 'h') // Àå»çÀÎ °æ¿ì
      {
         if (cpu_c == 'i' || cpu_c == 'j') // cpu°¡ ¼¼·ú¶Ç´Â ²ıÀÌ¸é user ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ cpu°¡ ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if (user_c == 'i') // ¼¼·úÀÎ °æ¿ì
      {
         if (cpu_c == 'j') // cpu°¡ ²ıÀÌ¸é user ½Â¸®
         {
            printf("À¯Àú ½Â¸®\n");
            return 'W';
         }
         else if (cpu_c == 'X' || cpu_c == 'Y' || cpu_c == 'i') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else // ±×¿Ü¿£ cpu°¡ ½Â¸®
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         }
      }
      else if(user_c=='j')// ²ıÀÎ °æ¿ì
      {
         if (cpu_c == 'X' || cpu_c == 'Y') // cpu°¡ ¸ÛÅÖ±¸¸® ±¸»ç¶Ç´Â ±¸»ç¸é Àç°æ±â
         {
            printf("Àç°æ±â\n");
            return 'D';
         }
         else if(cpu_c=='x')
         {
            if(hand_num1>1)
            {
               printf("À¯Àú ½Â¸®\n");
               return 'W';
            }
            else if(hand_num1==1)
            {
               printf("Àç°æ±â\n");
               return 'D';
            }
            else
            {
               printf("cpu ½Â¸®\n");
               return 'L';
            }
         }
         else if(cpu_c=='y')
         {
            if(hand_num1>0)
            {
               printf("À¯Àú ½Â¸®\n");
               return 'W';
            }
            else
            {
               printf("Àç°æ±â\n");
               return 'D';
            }
         }
         else
         {
            printf("cpu ½Â¸®\n");
            return 'L';
         } 
      }
   }
}

int main(void)
{
   int arr[20] = {1, 11, 2, 2, 3, 33, 4, 44, 5, 5,
                  6, 6, 7, 77, 8, 88, 9, 99, 10, 10}; // 11, 33, 44, 77, 88, 99´Â Æ¯¼öÆĞ(±¤, µÅÁö µîµî..)

   int num1, num2;
   int num3, num4;
   char user_c, cpu_c;
   int hand_num1, hand_num2;
   int *phand_num1 = &hand_num1;
   int *phand_num2 = &hand_num2;
   int select = 1;
   while (select == 1)
   {
      srand(time(0));
      printf("\n");
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
      printf("´ç½ÅÀÇ ÆĞ´Â\n");
      user_c = combi(arr[num1], arr[num3], phand_num1);
      printf("ÀÔ´Ï´Ù.\n");
      /*printf("1. Äİ, 2. ´ÙÀÌ : ");
      scanf("%d", &select);
      if (select == 1)
      {
         printf("\nÄÄÇ»ÅÍÀÇ ÆĞ´Â\n"); //³ªÁß¿¡ ¾ø¾Ö¼­ ºñ¹Ğ·Î ÇÒ ³»¿ë
         cpu_c = combi(arr[num2], arr[num4], phand_num2);
         printf("ÀÔ´Ï´Ù.\n\n");
         compare(user_c, cpu_c, hand_num1, hand_num2);
      }
      else
      {
         printf("cpu ½Â¸®\n");
      }*/
      printf("ÄÄÇ»ÅÍÀÇ ÆĞ´Â\n"); //³ªÁß¿¡ ¾ø¾Ö¼­ ºñ¹Ğ·Î ÇÒ ³»¿ë
      cpu_c = combi(arr[num2], arr[num4], phand_num2);
      printf("ÀÔ´Ï´Ù.\n");
      compare(user_c, cpu_c, hand_num1, hand_num2);
      printf("°è¼ÓÇÏ½Ã·Á¸é 1À» ±×¸¸ÇÏ·Á¸é 2¸¦ ´­·¯ÁÖ¼¼¿ä.\n");
      scanf("%d", &select);
   }
   return 0;
}