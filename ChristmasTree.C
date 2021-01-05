#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   for (i = 1; i <= 5; ++i, k = 0) {
      for (space = 1; space <= 10- i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   for (i = 1; i <= 7; ++i, k = 0) {
      for (space = 1; space <= 10- i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   for (i = 1; i <= 10; ++i, k = 0) {
      for (space = 1; space <= 10 - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
    for(i=1; i<=5; i++)
    {    for (space = 1; space <= 8; ++space) 
        {
            printf("  ");
        }
        for(int j=1; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
   return 0;
}
