#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int a, t;
    cout << "Alas: "; cin >> a;
    cout << "Tinggi: "; cin >> t;

    float area;
    area = (a * t)/2.0;

    cout << "Luas: ";
    cout << fixed  << setprecision(2) << area;
}
