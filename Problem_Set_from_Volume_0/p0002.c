#include <stdio.h>
int digits(int x) {
   int count = 0;
   while(x>0) {
      x /= 10;
      count++;
   }
   return(count);
}
int main(void) {
   int a, b;
   int sum;
   while( scanf("%d %d", &a, &b) !=EOF) { 
      // "!= EOF" ..「Ctrl+Z が入力されるまで」という意味.End Of File
      sum = a + b;
      printf("%d\n", digits(sum));
   }
   return (0);
}
