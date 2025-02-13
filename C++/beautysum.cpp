#include <iostream>
using namespace std;
#include <string>

int main(void){
    string str;
    int largest = 0, smallest = 0, beautySum;

    cout << "Enter string: ";
    cin >> str;

    int size = str.length();
    char countArr[26];

    for (int i = 0; i < 26; i++){
        countArr[i] = 0;
    }

    for (int i = 0; i < size; i++){
        str[i] = tolower(str[i]);
    }

    for (int i = 0; i < size; i++){
        countArr[str[i]-((int)'a')]++;
    }

    for (int i = 0; i < 26; i++){
        if (countArr[i] > largest){
            largest = countArr[i];
        }
    }
    smallest = largest;

    for (int i = 0; i < 26; i++){
        if (countArr[i] < smallest && countArr[i] > 0){
            smallest = countArr[i];
        }
    }

    beautySum = (largest-smallest);
    cout << "The beauty sum of " << str << " is " << beautySum;

}