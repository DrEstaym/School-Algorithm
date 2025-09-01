#include<iostream>
using namespace std;

int main() {
    int small = 0, medium = 0, large = 0;

    cout << "Insert the weights (in grams. End with -1): " << endl;
    double in;
    do {
        cin >> in;

        if(in != -1) {
            if(in < 50) {
                ++small;
            } else if((in >= 50) && (in <= 200)) {
                ++medium;
            } else {
                ++large;
            }
        }
    }
    while(in != -1);

    //Print
    cout << endl << "Small Cauliflower (<50g): " << small << endl;
    cout << "Medium Caauliflower (50g - 200g): " << medium << endl;
    cout << "Large Cauliflower (>200g): " << large << endl;
}