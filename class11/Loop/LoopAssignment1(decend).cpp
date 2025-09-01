#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Insert a number: ";  cin >> N;

    while(N > 0) {
        cout << N << endl;
        --N;
    }
}