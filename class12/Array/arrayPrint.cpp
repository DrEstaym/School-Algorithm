#include<bits/stdc++.h>
using namespace std;

int main() {
    int grades[5] = {60, 70, 80, 90, 100};

    cout << "Nilai: ";
    for(int i = 0; i < 5; i++) {
        if(i == 5) {
            cout << grades[i];
        } else {
            cout << grades[i] << " ";
        }
    }
}