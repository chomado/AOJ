// 問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0034
// accepted: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1059716#1
#include <iostream>
#include <vector>

bool input(std::vector<int> & l, int & v1, int & v2)
{
	char comma;
	if (!(std::cin >> l[0])) return false;
	for (int i = 1; i < 10; i++) {
		std::cin >> comma >> l[i];
	}
	std::cin >> comma >> v1 >> comma >> v2;
	return true;
}
int sum_of_length(std::vector<int> l) // 全体の道のり(距離)
{
	int sum = 0;
	for (std::vector<int>::size_type i = 0; i < l.size(); i++) {
		sum += l[i];
	}
	return sum;
}
double left_length(int v1, int v2, std::vector<int> l)
{		
	// 全体の道のり.(ふたつの列車の走る合計の距離)
	int    distance = sum_of_length(l);
	// ふたつの列車がすれ違った時の時間(=走る時間はふたつの列車共同じ)
	double hour     = static_cast<double>(distance) / (v1 + v2);
	// 左の列車がどれくらいの距離を走ったか
	return v1 * hour;
}
int get_sect(std::vector<int> l, const double left_length)
{
	int sum = 0;
	for (std::vector<int>::size_type i = 0; i < l.size(); i++) {
		sum += l[i];
		if (left_length <= sum) return i + 1;
	}
	return -1;
}
int main()
{
	int              v1, v2;    // 左からの列車の速さ, 右からの列車の速さ
	std::vector<int> l(10, 0); // 各区間の距離x10
	while (input(l, v1, v2)) {
		std::cout << get_sect(l, left_length(v1, v2, l)) << std::endl;
	}
}
