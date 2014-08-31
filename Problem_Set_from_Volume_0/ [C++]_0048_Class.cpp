// 問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0048
// accepted: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1059739#1
#include <iostream>

const double bound[10] = {91, 81, 75, 69, 64, 60, 57, 54, 51, 48};
const std::string rank[11]  = {"heavy", "light heavy", "middle", "light middle", "welter", "light welter", "light", "feather", "bantam", "fly", "light fly"};

int output(double weight)
{
	for (int i = 0; i < 10; i++) {
		if (weight > bound[i]) return i;
	}
	return 10;
}

int main()
{
	double weight;
	std::string str;
	while (std::cin >> weight) {
		std::cout << rank[output(weight)] << std::endl;
	}
}
