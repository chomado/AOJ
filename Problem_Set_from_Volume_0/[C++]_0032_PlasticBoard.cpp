// 問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0032&lang=jp
// 入力された三角形をふたつ組み合わせたら長方形になるかひし形になるか
// accepted: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1059919#1
#include <iostream>
int main()
{
	int  a, b, c;
	int  rectangle = 0, lozenges = 0;
	char comma;
	while (std::cin >> a >> comma >> b >> comma >> c) {
		if (a*a + b*b == c*c) { // もし直角三角形なら
			rectangle++;
		}
		else if (a == b) {
			lozenges++;
		}
	}
	std::cout << rectangle << '\n' << lozenges << std::endl;
}
