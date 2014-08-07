#include <stdio.h>
/* 直角三角形の判別。それぞれの辺を二乗して,
  a + b = c
  すなわち
  a + b - c = 0
  が成り立てばそれは直角三角形   
  */
int main(void) {
   int a, b, c;
   int N;
   scanf("%d", &N);
   while(N>0) {
      scanf("%d %d %d", &a, &b, &c);
      a*=a; b*=b; c*=c;
      puts((a+b-c && b+c-a && c+a-b) ? "NO" : "YES");
      N--;
   }
   return (0);
}
