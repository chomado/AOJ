// 問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0006&lang=jp
#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char str[32];
  char after[21];
  int i;
  /* reset */
  memset(str, '\0', sizeof(str));
  memset(after, '\0', sizeof(after));
 
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
 
  for (i=0; i < strlen(str); i++)
    {
      after[strlen(str)-1-i] = str[i];
    }
 
  printf("%s\n", after);
 
  return 0;
}
