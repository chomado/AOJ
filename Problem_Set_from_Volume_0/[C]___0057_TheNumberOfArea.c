#include <stdio.h>
int solve(int n)
{
    if (n <= 0) {
        return 1;
    }
    else {
        return solve(n-1)+n;
    }
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", solve(n));
    }
    return 0;
}
