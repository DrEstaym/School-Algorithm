#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Month number: "; cin >> month;

    switch(month){
        case 1: cout << "This is January" << endl; break;
        case 2: cout << "This is February" << endl; break;
        case 3: cout << "This is March" << endl; break;
        case 4: cout << "This is April" << endl; break;
        case 5: cout << "This is May" << endl; break;
        case 6: cout << "This is June" << endl; break;
        case 7: cout << "This is July" << endl; break;
        case 8: cout << "This is August" << endl; break;
        case 9: cout << "This is September" << endl; break;
        case 10: cout << "This is October" << endl; break;
        case 11: cout << "This is November" << endl; break;
        case 12: cout << "This is December" << endl; break;

        default: cout << "Tolol lu" << endl; break;
    }
}

//Alternative:

/*
#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
    string month[12] = {
                        "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"
                        };

    int ask;
    cout << "What month: "; cin >> ask;
    if((ask < 1) || (ask > 12)) {
        cout << "The month does not exist" << endl;
    } else {
        cout << "This is " << month[ask - 1];
    } 
}*/
