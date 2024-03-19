#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[]) {
    int n = 5;
    cout << "n - 1: ";
    for (int i = 0; i < n - 1; i++) {
        cout << i << " ";
    }
    cout << "\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "i: " << i << " " << "j: " << j << "\n";
            cout << "Loop " << i << "," << j << ": ";
            cout << "arr[i]: " << arr[i] << " ";
            cout << "arr[j]: " << arr[j] << " ";
            cout << "arr[j + 1]: " << arr[j + 1] << " ";
            cout << "n - i - 1: " << n - i - 1 << " ";
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cout << "arr[i]: " << arr[i] << " ";
            cout << "arr[j]: " << arr[j] << " ";
        }
    }
    cout << "\n";
}

void printBubbleSort(int arr[]) {
    cout << "BubbleSort : ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int intArray[5] = {4, 2, 1, 5, 3};
    string strArray[5] = {"b", "d", "a", "e", "c"};

    BubbleSort(intArray);
    printBubbleSort(intArray);
    return 0;
}