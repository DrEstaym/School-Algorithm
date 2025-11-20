#include<iostream>
using namespace std;

int main() {
    //Initialize
    int value[3][4] =  {{2, 5, 1, 3},
                        {6, 4, 9, 7},
                        {8, 10, 18, 11}};

    //Out
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<< "Baris " << i + 1 << " , Kolom " << j + 1<< " = " << value[i][j] << endl;
        }
        cout << endl;
    }

    cout << "Matriks 3 x 4 = " << endl << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<< value[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

