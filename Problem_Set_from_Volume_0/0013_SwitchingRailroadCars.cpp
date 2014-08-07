// [AOJ]行き止まりの道路に車が云々とかだけど要するにただのstack 
// 問題： http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0013 
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int>  stk;
    int         car;
    while (cin >> car) {
        if (car) {
            stk.push(car);
        } 
        else {
            cout << stk.top() << endl;
            stk.pop();
        }
    }
}
