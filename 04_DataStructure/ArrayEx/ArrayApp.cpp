#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int input = 10;
    int arr[10];

    // insert
    for (int i = 1; i <= input; i++) v.push_back(i);
    for (int i = 0; i < 10; i++) arr[i] = i + 1;

    for (int i : v) cout << i << " ";cout << "\n";
    for (int i : v) cout << &v[i] << " " << i << "\n";
    cout << "\n";
    for (int i = 0; i < input; i++) cout << arr[i] << " ";cout << "\n";
    for (int i = 0; i < input; i++) cout << &arr[i] << " " << arr[i] << "\n";
    cout << "\n";

    // sort
    for (int i = 0; i < input; i++) {
        for (int j = i+ 1; j < input; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < input; i++) cout << arr[i] << " ";cout << "\n";
    for (int i = 0; i < input; i++) cout << &arr[i] << " " << arr[i] << "\n";
    cout << "\n";
}