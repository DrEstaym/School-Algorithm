#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;

    a = 5;
    b = a + 1;
    b = b + 5;
    c = (a + b) * 2 + a;
    d = c % b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}