// [AOJ][C++]三角関数の問題 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0016&lang=jp 
#include <iostream>
#include <cmath>
template <class Type> class Point {
    Type x;
    Type y;
public:
    Point(const Type& f = Type(), const Type& s = Type()) : x(f), y(s) { }
    Type get_x() const { return x; }
    Type get_y() const { return y; }
    void set(const Type& x, const Type& y)  {this->x = x; this->y = y;}
    void print()  { std::cout << "(" << this->x << ", " << this->y << ")\n"; }
    void answer() { std::cout <<  static_cast<int>(this->x) << '\n' << static_cast<int>(this->y) << std::endl; }
};
int main()
{
    Point<double>   point;
    char            comma;
    for (double distance, angle, sum_angle = 0; std::cin >> distance >> comma >> angle && (distance || angle);) {
        point.set(point.get_x() + distance * sin(sum_angle), point.get_y() + distance * cos(sum_angle));
        sum_angle += angle * M_PI / 180;
    }
    point.answer();
}
