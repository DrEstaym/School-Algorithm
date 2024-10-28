#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Bilangan a: "; cin >> a;
    cout << "Bilangan b: "; cin >> b;

    int remainder = a % b;
    int result = a / b;

    cout << "Hasil pembagian: " << result << endl;
    cout << "Hasil sisa pembagian: " << remainder << endl;
}
