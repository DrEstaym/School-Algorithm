#include<iostream>
using namespace std;

int main() {
    int N;
    int max = 0;

    cout << "How many numbers to compare? "; cin >> N;
    cout << "Insert the number: (Enter 1 by 1)" << endl;

    while(N != 0) {
        int input = 0;
        cin >> input;

        if(max < input) {
            max = input;
            N--;
        } else {
            N--;
        }
    }

    cout << "The max number is: " << max << endl;
}