#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insert Num: " ; cin >> num;

    if(num % 2 == 0) 
        cout << "Num is even" << endl;
    else
        cout << "Num is odd" << endl;
    
}