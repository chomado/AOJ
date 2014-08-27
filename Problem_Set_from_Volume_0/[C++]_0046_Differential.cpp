// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0046&lang=jp
// 一番高い山と一番低い山の標高差（実数）
#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	double 			input;
	std::vector<double> 	height;
	while (std::cin >> input) {
		height.push_back(input);
	}
	sort(height.begin(), height.end());
	std::cout << *(height.end()-1) - *(height.begin()) << std::endl;
}
