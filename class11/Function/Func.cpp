#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.1415926535897932;

double areaCircle(double radius) {
    return radius * radius * pi;
}

int main() {
    double radii;
    cout << "Radius: ";
    cin >> radii;

    cout << fixed << setprecision(2) << "The area is: " << areaCircle(radii);
}