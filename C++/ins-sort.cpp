#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;

        }
    }

    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ":";
        cin >> arr[i];
    }

    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, size);
    return 0;
}