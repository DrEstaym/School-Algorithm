#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    float f;

    a = 5;
    b = a + 1;
    b = b + 5;
    c = (a + b) * 2 + a;
    d = c % b;
    e = 8/3;                //with int
    f = 8.0/3.0;            //with float

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
}