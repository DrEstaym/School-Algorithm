#include <bits/stdc++.h>
using namespace std;

int findChar(char find, char table[]) {
    for(int i = 0; i < 26; i++) {
        if (table[i] == find) {
            return i;
        }
    }
    return 0;
}

int main() {
    char vignereTable[26][26];

    //Init 1st row of table
    for(int i = 0; i < 26; i++) {
        vignereTable[0][i] = 'A' + i;
    }

    //Input the keyword
    string keyword; cout << "Insert the keyword: (All capital, no double characters) "; cin >> keyword;

    //Change the table with the keyword
    for(int i = 0; i <  keyword.length(); i++) {
        int index = findChar(keyword[i], vignereTable[0]);
    
        for(int j = index; j > i; j--) {
            vignereTable[0][j] = vignereTable[0][j - 1];
        }
        vignereTable[0][i] = keyword[i]; 
    }

    //Make the table
    for(int i = 1; i < 26; i++) {
        char temp = vignereTable[i - 1][0];
        for(int j = 0; j < 25; j++) {
            vignereTable[i][j] = vignereTable[i - 1][j + 1];
        }
        vignereTable[i][25] = temp;
    }

    //Input the keystream and message
    string keystream; cout << "Insert the keystream: (No Duplicates, All Capital) "; cin >> keystream;
    string messages; cout << "Insert the messages: (No Spaces, All Capital) "; cin >> messages;

    //Make the key
    string key;
    for(int i = 0; i < messages.length(); i++) {
        char keySingle = keystream[i % keystream.length()];
        key.push_back(keySingle);
    }

    //Find row and column that satisfies messages (column) and key (rows)
    string crypted;
    for(int i = 0; i < messages.length(); i++) {
        //find the column that satisfies messages char
        int colIndex = 0;
        char message = messages[i];
        for(int j = 0; j < 26; j++) {
            if(vignereTable[0][j] == message) {
                colIndex = j;
                break;
            }
        }

        //Find the row that satisfies key char
        int rowIndex = 0;
        char lock = key[i];
        for(int j = 0; j < 26; j++) {
            if(vignereTable[j][0] == lock) {
                rowIndex = j;
                break;
            }
        }

        //Make the crypted message
        crypted.push_back(vignereTable[rowIndex][colIndex]);
    }

    //Print table
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            cout << vignereTable[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << crypted;
}