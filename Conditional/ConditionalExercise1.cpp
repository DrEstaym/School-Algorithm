#include<iostream>
using namespace std;

int main() {
    float num, denom;
    cout << "Numerator "; cin >> num;
    cout << "Denominator: "; cin >> denom;

    if(denom <= 0) {
        cout << "Denominator cannot be a zero!" << endl;
    } else {
        float hasil = num/denom;
        cout << "Result = " << hasil;  
    }
}