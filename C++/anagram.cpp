#include <iostream>
using namespace std;
#include <string>


string insertion_sort(string arr, int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            cout << endl;

        }
    }

    return arr;
}


int main(void){
    string sm1, sm2;

    cout << "Enter string 1: ";
    cin >> sm1;
    int len_sm1 = sm1.length();

    cout << "Enter string 2: ";
    cin >> sm2;
    int len_sm2 = sm2.length();

    string sorted_sm1 = insertion_sort(sm1, len_sm1);
    string sorted_sm2 = insertion_sort(sm2, len_sm2);

    if (sorted_sm1 == sorted_sm2){
        cout << "They are anagrams" << endl;

    }
    else {
        cout << "They are not anagrams" << endl;
    }
}