// 問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0049
// accepted: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1059729#1
#include <iostream>
#include <map>

bool input(std::map<std::string, int> & data)
{
	int    no;
	char   comma;
	std::string blood_type;
	if (std::cin >> no >> comma >> blood_type) {
		data[blood_type]++;
	}
	else {
		return false;
	}
	return true;
}
void output(std::map<std::string, int> data)
{
	std::cout << data["A"]  << std::endl;
	std::cout << data["B"]  << std::endl;
	std::cout << data["AB"] << std::endl;
	std::cout << data["O"]  << std::endl;
}
int main()
{
	std::map<std::string, int> data;
	while (input(data));
	output(data);
}
