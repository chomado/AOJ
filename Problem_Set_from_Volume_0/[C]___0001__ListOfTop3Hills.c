#include <stdio.h>
#include <stdlib.h>
#define NUMBER 10
static int cmp_int(const void* v1, const void* v2) {
   const int _v1 = *((const int*)v1);
   const int _v2 = *((const int*)v2);
   if ( _v1 > _v2 )
      return 1;
   else if ( _v1 < _v2 )
      return -1;
   else 
      return 0;
}
int main(void) {
   int data[NUMBER];
   int i;
   for(i=0; i<NUMBER; i++) {
      scanf("%d", &data[i]);
   }
   qsort(data, NUMBER, sizeof(int), cmp_int);
   for (i = NUMBER-1; i > NUMBER-4; i--) {
      printf("%d\n", data[i]);
   }
   return(0);
}
