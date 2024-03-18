#include <bits/stdc++.h>
using namespace std;

void ChangeValue(int arr[]) {
    cout << "arr[0] : " << arr[0] << "\n";

    // Change array value
    arr[0] = 5;
    cout << "arr[0] : " << arr[0] << "\n";

    // [Loop] Change array value
    cout << "arr[i] : ";
    for (int i = 0; i < 6; i++) {
        if (arr[i] < 5) arr[i] = 5;
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[6] = {3, 4, 2, 1, 5, 6};
    ChangeValue(arr);
    return 0;
}