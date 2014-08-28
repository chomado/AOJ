// 問題 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0029&lang=jp
// 最も出現頻度が高い単語と、最も文字数が多い単語を１つのスペースで区切って１行に出力
#include <iostream>
#include <map>
#include <algorithm>
int main()
{
	std::map<std::string, int>	words;
	std::string 			input;

	while (std::cin >> input) 
		++words[input]; 
	
	auto result  = std::minmax_element(words.begin(), words.end(), [](const auto & a, const auto & b) { return a.first.length() < b.first.length(); });
	auto result2 = std::minmax_element(words.begin(), words.end(), [](const auto & a, const auto & b) { return a.second < b.second; });

	std::cout << result2.second->first << ' ' << result.second->first << std::endl;
}
