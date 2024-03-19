#include <bits/stdc++.h>
using namespace std;

void insert(int arr[], int num, int idx, int& len) {
    cout << arr[idx] << "\n";
    for(int i = len; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void erase(int arr[], int idx, int& len) {
    len--;
    for (int i = idx; i < len; i++) {
        arr[idx] = arr[i + 1];
    }
}

void printArr(int arr[], int& len){
    for(int i = 0; i < len; i++) cout << arr[i] << ' ';
    cout << "\n\n";
}

int main(void) {
    int arr[3] = {1, 2, 3};
    int num = 4, idx = 1, len = 3;
    for (int i = 0; i < 3; i++) {
        cout << "주소값: " << &arr[i];
        cout << " " << "요소: " << arr[i] << "\n";
    }

    insert(arr, num, idx, len);
    printArr(arr, len);

    erase(arr, idx, len);
    printArr(arr, len);

    for (int i = 0; i < len; i++) {
        cout << "주소값: " << &arr[i];
        cout << " " << "요소: " << arr[i] << "\n";
    }
    cout << sizeof(arr) << "\n";
}