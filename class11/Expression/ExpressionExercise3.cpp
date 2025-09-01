#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cout << "Bilangan a: "; cin >> a;
    cout << "Bilangan b: "; cin >> b;

    long long remainder = a % b;
    long long result = a / b;

    cout << "Hasil pembagian: " << result << endl;
    cout << "Hasil sisa pembagian: " << remainder << endl;
}
