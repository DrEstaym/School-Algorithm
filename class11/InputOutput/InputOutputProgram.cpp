#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int a; cout << "Input a (whole Num): "; cin >> a;
    float b; cout << "Input b (decimal Num): "; cin >> b;
    int c; cout << "Input c (whole Num): "; cin >> c;

    cout << "a = " << a << endl;
    cout << "b = " << fixed << setprecision(2) << b << endl;
    cout << "c = " << c << endl;
}