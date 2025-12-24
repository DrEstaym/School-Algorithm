#include <bits/stdc++.h>
using namespace std;

string wordExtract(string rawText, int startingIndex) {
    string subStr = "";
    int point = startingIndex;
    while(rawText[point] != ' '){
        subStr += rawText[point];
        point++;
    }
    return subStr;
}

string wordExtractUntilClose(string rawText, int startingIndex) {
    string subStr = "";
    int point = startingIndex;
    while(rawText[point] != ')'){
        subStr += rawText[point];
        point++;
    }
    return subStr;
}

int indexSpace(string rawText, int startingIndex) {
    int point = startingIndex;
    while(rawText[point] != ' '){
        point++;
    }
    return point + 1;
}
int indexClose(string rawText, int startingIndex) {
    int point = startingIndex;
    while(rawText[point] != ')'){
        point++;
    }
    return point + 1;
}

int main() {
    string myText;
    string outText;

    remove("NotAssigned/gradeDataRefined.txt");

    // Read from the text file
    ifstream MyReadFile("NotAssigned/gradeData.txt");
    ofstream DestinationFile("NotAssigned/gradeDataRefined.txt");

    int counter = 1;
    while (getline(MyReadFile, myText)) {
        outText = "";
        //Num at front
        string subText;
        int pointer = 0;
        while(myText[pointer] != ' ') {
            subText += myText[pointer];
            pointer++;
        }
        pointer++;
        outText += (subText + ';');

        //ID
        subText = "";
        for(int i = 0; i < 23; i++) {
            subText += myText[pointer + i];
        }
        pointer += 24;
        outText += (subText + ';');

        //NISN
        subText = "'";
        for(int i = 0; i < 10; i++) {
            subText += myText[pointer + i];
        }
        pointer += 11;
        outText += (subText + ';');

        //Name through birthyear
        subText = "";
            //Extract text
            subText = (wordExtract(myText, pointer) + ' ');
            pointer = indexSpace(myText, pointer);
            outText += subText;
            while((subText != "2006 ") && (subText != "2007 ") && (subText != "2008 ") && (subText != "2009 ")) {
                subText = (wordExtract(myText, pointer) + ' ');
                pointer = indexSpace(myText, pointer);
                outText += subText;
            }
        outText.pop_back();
        outText += ';';

        //Grades
        for(int rep = 0; rep < 5; rep++) {
            subText = "";
            subText = (wordExtractUntilClose(myText, pointer));
            pointer = indexClose(myText, pointer);
            outText += subText + ");";
        }

        cout << outText << endl;
        //Write data
        DestinationFile << outText + "\n";

    }

    // Close the file
    MyReadFile.close();
    DestinationFile.close();

    return 0;
}