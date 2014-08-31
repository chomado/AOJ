// 問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0047
// 3つの伏せられたカップの中にボールがひとつ. 
// 複数回シャッフルして, 最終的に何番目のカップに入っているか出力
// accepted: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1059905#1
#include <iostream>
#include <map>
int main()
{
	char from, to, comma;
	std::map<char, bool> cups;
	cups['A'] = true;
	cups['B'] = false;
	cups['C'] = false;
	while (std::cin >> from >> comma >> to) {
		std::swap(cups[from], cups[to]);
	}
	std::cout << (cups['A'] ? 'A' : (cups['B'] ? 'B' : 'C')) << std::endl;
}

