#include <iostream>
#include <string>
using namespace std;

int main() {
    //Var Declare
    int wholeNum = 5;                       //Whole Number (int)
    float floatingNum = 5.99;               //Floating point
    double doubleNum = 9.98;                //More precise floating point
    char letter = 'D';                      //Single character
    bool state = true;                      //True or False
    string sentence = "Hello madafaka!";    //Array of chars

    //Output area
    cout << "int : " << wholeNum << endl << "float : " << floatingNum << endl << "double : " << doubleNum <<  endl;
    cout << "char : " << letter << endl << "bool : " << state << endl << "string : "  << sentence << endl;
}