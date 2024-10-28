#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;

    cout << ((a < c) || (a > b)) << endl;
    cout << ((a <= b) || (b != c)) << endl;
    cout << ((b == c) && (a < c)) << endl;
    cout << ((b <= a) && ((b > c) || (c < a))) << endl;

}
