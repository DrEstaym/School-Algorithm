#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N;
    long long total = 0;
    double result;

    cout << "How many numbers? "; cin >> N;
    cout << "Insert the numbers here: (seperated by spaces) "<< endl;
    for(int i = 1; i <= N; i++) {
        int input;
        cin >> input;
        total += input;
    }

    result = total/(N * 1.0);
    cout << fixed << setprecision(2) << "The mean is: " << result << endl; 
}