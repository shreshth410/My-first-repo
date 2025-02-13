/*#include <iostream>
using namespace std;
#include <string>

string rotateString(const string& s) {
    if (s.length() > 0) {
        return s[s.length() - 1] + s.substr(0, s.length() - 1);
    }
    return s;
}

int main(void){
    string str, tempStr, rotString;
    int rotate, size, noOfRotations = 0;

    cout << "Enter string to compare: ";
    cin >> str;

    cout << "Enter string to check: ";
    cin >> rotString;

    tempStr = str;
    size = str.length();

    do {
        str = rotateString(str);

        noOfRotations++;
    }while (str == tempStr || str == rotString);

    cout << "done" << endl;



    if (strcmp(str, tempStr) == 0){
        cout << "The strings cannot be equal to each other after any number of rotations." << endl;
    }

    if (strcmp(str, rotString) == 0){
        cout << "The strings become after " << noOfRotations << "rotations." << endl;
    }

    else{
        cout << str << endl << tempStr << endl << rotString << endl;
    }
    cout << "done 2" << endl;
    
}*/

#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) {
        return false;  // If lengths are different, s can't be rotated to match goal.
    }
    return (s + s).find(goal) != string::npos;  // Check if goal is a substring of s + s
}

int main(void) {
    string s, goal;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string goal: ";
    cin >> goal;
    
    if (rotateString(s, goal)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

}

