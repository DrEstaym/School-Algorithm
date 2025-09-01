#include<iostream>
#include<string.h>
using namespace std;

int main() {
    //Int Test:
    int myNum;

    myNum = 15;                                 //Declare myNum = 15
    cout << myNum << endl;                      //Output
    myNum = 100;                                //Declare myNum = 100
    cout << myNum << endl;                      //Output


    //Double and Float
    float floater = 1.2;                        //Declare floater
    double doubler = 1.6999;                    //Declare doubler

    cout << floater << " " << doubler << endl;  //Output


    //String and Char
    char character = 'A', character1 = 'a';     //Declare char and char1
    char test = '1', fap = '0';
    int testint = test, fapint = fap;
    cout << testint << " " << fapint << endl;
    string sentence = "Hello Madafaka!";        //Declare sentence

    cout << character << " " << character1 << " " << sentence << endl;  //Output


    //Bool
    bool state = false;                         //Declare state
    cout << state << " ";                       //Output

    state = true;                               //state is now true
    cout << state << " " << endl;               //Output


    //Const Test   
    const int num = 123;                        //Declare constant int num
    const double pi = 3.141563;                 //Declare constant double pi
    cout << pi << " " << num << endl;                         //Output
    


   //Operator Test
   int x = 5908813, y = 68091;
   int sum = x + y;
   cout << sum << endl;
}