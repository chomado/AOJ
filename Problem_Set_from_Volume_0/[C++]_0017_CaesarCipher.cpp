// 何文字ズラすか分からない(1文字ずつズラして"the"が出るまで確認する)シーザー暗号の問題
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0017&lang=jp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		// "the"も"this"も"that"も見つからない, 限りループし続ける
		while (s.find("the") == string::npos
			&& s.find("this") == string::npos
			&& s.find("that") == string::npos)
		{
			for (int i=0; i<s.size(); i++)
			{
				if (s[i] == 'z') // zの場合はaにリセット
					s[i] = 'a';
				else if (s[i] >= 'a' && s[i] <= 'z') // アルファベットは1文字ズラす
					s[i]++;
			}
		}
		cout << s << endl;
	}
}
