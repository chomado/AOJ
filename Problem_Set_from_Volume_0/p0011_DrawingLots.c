#include <stdio.h>
 
void swap(int* a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
 
int main(void)
{
  int w; // タテ棒 |  の数
  int n; // ヨコ棒 ー の数
 
  int a, b; // a番からb番にかけてヨコ棒が引かれる
 
  int i;
 
  scanf("%d", &w);
  scanf("%d", &n);
 
  int line[w];
 
  for (i=1; i<=n; i++)
    line[i] = i;
 
  for (i=0; i<n; i++)
    {
      scanf("%d,%d", &a, &b);
      swap(&line[a-1], &line[b-1]);
    }
 
  for (i=0; i<w; i++)
    {
      printf("%d\n", line[i]+1);
    }
 
  return 0;
}
