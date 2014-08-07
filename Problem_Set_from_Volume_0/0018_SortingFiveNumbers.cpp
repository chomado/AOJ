// [AOJ] 5つの整数を降順に表示する。問題: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0018 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int          input;
    vector<int>  array;
    for (int i=0; i<5; ++i) {
        cin >> input;
        array.push_back(input);
    }
    sort(array.begin(), array.end(), greater<int>());
    for (vector<int>::size_type i=0; i<array.size(); ++i) {
        cout << array[i];
        cout << (i==4 ? '\n' : ' ');
    }
}
