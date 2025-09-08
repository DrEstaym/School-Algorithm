#include<iostream>
using namespace std;

int main() {
    //Initiate Array
    int size = 50000;        //Tambahan: int size untuk mengatur jangkauan array-nya (biar enak dimodif)
    int nilai[size];      //Kebanyakan isi (50 -> 25)
    //Fill array
    for(int i = 0; i < size; i++) {
        nilai[i] = i + 1;
    }

    cout << "Bilangan genap: ";
    for(int i = 0; i < size; i++) {
        if((nilai[i] % 2) == 0) {
            cout << nilai[i] << " ";
        }
    }

    cout << "\nBilangan ganjil: ";
    for(int i = 0; i  < size; i++) {
        if((nilai[i] % 2) != 0) {
            cout << nilai[i] << " ";
        }
    }
}