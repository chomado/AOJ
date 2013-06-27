#include <stdio.h>
int count (int n) {
   int a, b, c, d, counter = 0;
   for (a=0; a<10; a++)
      for (b=0; b<10; b++)
         for (c=0; c<10; c++)
            for (d=0; d<10; d++)
               if (a+b+c+d == n) counter++;
   return counter;
}
int main() {
   int n;
   while (scanf("%d", &n) != EOF) {
      printf("%d\n", count(n) );
   }
   return (0);
}
