#include <iostream>
using namespace std;

int main() {
    int num, remain;
    cout << "Insert num: "; cin >> num;

    remain = num % 4;

    switch (remain) {
    case 0: cout << "Remains 0 after divided by 4" << endl; break;
    case 1: cout << "Remains 1 after divided by 4" << endl; break;
    case 2: cout << "Remains 2 after divided by 4" << endl; break;
    case 3: cout << "Remains 3 after divided by 4" << endl; break;
    default: break;
    }
}