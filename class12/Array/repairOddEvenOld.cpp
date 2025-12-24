#include <iostream> 
using namespace std; 
int main() { 
    //inisialisasi array 
    int nilai [50];             // 

    //isi nilai array 
    for (int i=0; i<25; i++) { 
        nilai [i]=i+1; 
    } 

    cout <<"Bilangan genap :"; 
    //mencetak isi array 
    for (int i=0; i<25; i++){ 
        if (nilai[i] % 2 ==0){ 
            cout <<nilai [i]<<" "; 
        } 
    } 

    cout <<"\nBilangan ganjil :"; 
    //mencetak isi array 
    for (int i=0; i<25; i++){ 
        if (nilai[i] % 2 !=0){ 
        cout <<nilai [i]<<" "; 
        } 
    }
}                               //Kekurangan '}'