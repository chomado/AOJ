// [AOJ][0019 Factorial] nの階乗(nは20まで) http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0019&lang=jp 
// 正直「うはｗｗ階乗とかｗｗ楽勝ｗｗ」って思って10秒で書いてソッコーでsubmitしたんですけど、4回もwrong answer出しました。…はい、intでやってました。気づくまでに10分くらいやってました
#include <iostream>
typedef unsigned long long ULL;
ULL factorial(ULL n)
{
    if (n == 0) {
        return 1;
    } 
    else {
        return n * factorial(n-1);
    }
}
int main()
{
    ULL n;
    std::cin  >> n;
    std::cout << factorial(n) << std::endl;
}
