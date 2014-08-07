#include <stdio.h>
#define N 101
 
int maxes(const int *n, int *max_array) // 要素数を返す(いくつ最大値があったか)
{
    int counter     = 0;
    int max     = 0;
    int i;
    for (i=0; i<N; i++) { // 最大値を取得するためのループ
        if (max < n[i]) {
            max = n[i];
        } 
    }
    for (i=0; i<N; i++) { 
        if (n[i] == max) {
            max_array[counter] = i;
            counter++;
        }
    }
    return counter;
}
 
int main(void)
{
    int n[N]        = {0};
    int max_array[N]    = {0};
    int i;
 
    while (scanf("%d", &i) != EOF) {
        n[i]++;
    }
 
    int size = maxes(n, max_array);
 
    for (i=0; i<size; i++) {
        printf("%d\n", max_array[i]);
    }
 
    return 0;
 
}
