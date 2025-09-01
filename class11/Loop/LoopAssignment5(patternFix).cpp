#include<iostream>
using namespace std;

//program membentuk matriks
int main() {
    int N, i, j;
    cin >> N;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(j == i || j == N - i - 1) {
                cout <<"*";
            }
            else {
                cout << "-";
            }
        }
        cout <<"\n";
    }

return 0;
}