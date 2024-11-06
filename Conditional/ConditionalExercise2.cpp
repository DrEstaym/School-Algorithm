#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Insert Number "; cin >> num;

    if(num > 0) {
        cout << "The number is positive" << endl;
    } else if(num < 0) {
        cout << "The number is negative" << endl;
    } else {
        cout << "The number is a zero" << endl;
    }
}
