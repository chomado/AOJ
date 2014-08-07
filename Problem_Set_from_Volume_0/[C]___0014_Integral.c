#include <stdio.h>
 
int func(int, int);
 
int main(void)
{
  int d, i;
  int sum = 0;
  while (scanf("%d", &d)!=EOF)
    {
      sum = 0;
      for (i=0; i<600/d; i++)
        {
          sum += func(d*i, d);
        }
      printf("%d\n", sum);
    }
  return 0;
}
 
int func(int x, int d) {
  return d * x * x;
}
