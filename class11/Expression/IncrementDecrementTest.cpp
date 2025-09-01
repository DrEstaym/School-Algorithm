#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 5;

    cout << "Initial state : a = " << a << " , b = " << b << endl;

    cout << "Post Increment: " << endl;
    cout << "a = " << a << endl;
    cout << "a = " << a++ << endl;          //print then increment a
    cout << "a = " << a << endl;

    cout << "Pre Increment: " << endl;
    cout << "b = " << b << endl;
    cout << "b = " << ++b << endl;          //increment b then print
    cout << "b = " << b << endl << endl;

    a = 5, b = 5;

    cout << "Initial state : a = " << a << " , b = " << b << endl;

    cout << "Post Decrement: " << endl;
    cout << "a = " << a << endl;
    cout << "a = " << a-- << endl;          //print then decrement a
    cout << "a = " << a << endl;

    cout << "Pre Decrement: " << endl;
    cout << "b = " << b << endl;
    cout << "b = " << --b << endl;          //decrement b then print
    cout << "b = " << b << endl;
    
}