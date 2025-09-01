#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout  << "Insert a and b: "; cin >> a >> b;

    if(b != 0) {
        if(a / b > 10) {
            cout << "1" << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}