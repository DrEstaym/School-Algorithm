#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const double pi = 3.1415926535897932;

//2D Area and Circumference
double circleArea(double radius) {
    return pi * radius * radius;
}

double circleCircumference(double radius) {
    return pi * radius * 2.0;
}

double triangleArea(double base, double height) {
    return (base * height) / 2.0;
}

double trianglecircumference(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

double squareArea (double length, double width) {
    return length * width;
}

double squareCircumference(double length, double width) {
    return 2.0 * (length + width);
}

//3D shape surface area
double blockSurface(double length, double width, double height) {
    return 2.0 * ((length * width) + (width * height) + (length * height));
}

double coneSurface(double radius, double height) {
    double hypotenuse = sqrt(pow(radius, 2) + pow(height, 2));

    return (pi * radius * radius) + (pi * radius * hypotenuse);
}

double ballSurface(double radius) {
    return 4.0 * (pi * radius * radius);
}

double pyramidSurface(double side, double height) {
    double sideHeight = sqrt(pow(side / 2, 2) + pow(height, 2));

    return (side * side) + (4.0 * ((sideHeight * side) / 2.0));
}


int main() {
    int N;

    do {
        cout << endl << endl << "Options: " << endl;
        cout << "2D Shapes: " << endl;
        cout << "1. Squares" << endl;
        cout << "2. Triangles" << endl;
        cout << "3. Circles" << endl << endl;

        cout << "3D Shape Surface Area" << endl;
        cout << "4. Block" << endl;
        cout << "5. Cone" << endl;
        cout << "6. Ball" << endl;
        cout << "7. Pyramid" << endl; 
        cout << "Input \"-1\" to end" << endl;

        cin >> N;

        switch(N) {
            case 1: 
                double length1, width1;
                cout << "Length and width? "; 
                cin >> length1 >> width1;

                cout << fixed << setprecision(2) << "The area is : " << squareArea(length1, width1) << endl;
                cout << fixed << setprecision(2) << "The circumference is: " << squareCircumference(length1, width1) << endl;

                break;
            case 2:
                double base2, height2;
                cout << "Base and height? (for area) ";
                cin >> base2 >> height2;

                cout << fixed << setprecision(2) << "The area is : " << triangleArea(base2, height2) << endl;

                double side1, side2, side3;
                cout << "Input the sides (for circumference) ";
                cin >> side1 >> side2 >> side3;
                
                cout << fixed << setprecision(2) << "The circumference is: " << trianglecircumference(side1, side2, side3) << endl;

                break;
            case 3:
                double radii3;
                cout << "Radius? "; 
                cin >> radii3;

                cout << fixed << setprecision(2) << "The area is : " << circleArea(radii3) << endl;
                cout << fixed << setprecision(2) << "The circumference is: " << circleCircumference(radii3) << endl;
                
                break;
            case 4:
                double length4, width4, height4;
                cout << "Length, width, and height? ";
                cin >> length4 >> width4 >> height4;

                cout << fixed << setprecision(2) << "The surface area is : " << blockSurface(length4, width4, height4) << endl;

                break;
            case 5:
                double radius5, height5;
                cout << "Radius and height? ";
                cin >> radius5 >> height5;

                cout << fixed << setprecision(2) << "The surface area is : " << coneSurface(radius5, height5) << endl;

                break;
            case 6:
                double radii6;
                cout << "The Radius? ";
                cin >> radii6;

                cout << fixed << setprecision(2) << "The surface area is : " << ballSurface(radii6) << endl;

                break;
            case 7:
                double side7, height7;
                cout << "Side length and height? ";
                cin >> side7 >> height7;

                cout << fixed << setprecision(2) << "The surface area is: " << pyramidSurface(side7, height7) << endl;

                break;
            default:
                cout << "Program Ended or Invalid Input" << endl;
                break;

        }
    } while(N != -1);
}