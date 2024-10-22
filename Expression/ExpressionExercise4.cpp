#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;

    if((a < c) || (a > b)) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    if((a <= b) || (b != c)) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    if((b == c) && (a < c)) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    if((b <= a) && ((b > c) || (c < a))) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }
}
