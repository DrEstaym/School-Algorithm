#include<bits/stdc++.h>
using namespace std;

int main() {
    int grade[5];

    for(int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << " ";
        cin >> grade[i];
    }


    cout << "=============================================" << endl;
    cout << "Nilai: ";
    for(int i = 0; i < 5; i++) {
        if(i == 5) {
            cout << grade[i];
        } else {
            cout << grade[i] << " ";
        }
    }
}