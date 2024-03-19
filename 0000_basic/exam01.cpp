#include <bits/stdc++.h>
using namespace std;

void tc() {
    int n;
    //cin >> n;
    int tc = 1260, cnt = 0, ret = 0;
    int arr[5] = {500, 100, 50, 10};
    for (int i = 0; i < 5; i++) {
        cout << tc - arr[i] << "\n";
        cnt++;
        cout << tc % arr[i] << "\n";
    }
    cout << "\n";
    cout << ret << "\n";
}

void tc2() {
    int n, k, cnt = 0, temp = 0;
    cin >> n;
    cin >> k;
    cout << n << " " << k << "\n";
    for (int i = 0; i < n; i++) {
        if (n / k != 0) {
            temp = n / k;
            cout << temp;
            cnt++;
        } else {
            n - 1;
            cnt++;
        }
    }

    cout << "cnt: " << cnt - 1 << "\n";
}

void tc22() {
    // Memory = 20
    int arr[5] = {1, 2,3,4,5};

    // Memory = 4, 4
    int a = 1, b = 2;

    cout << "arr[2]: " << &arr << "\n";
    cout << "arr[0]: " << arr[0] << " Add: " << &arr[0] << "\n";
    cout << "arr[1]: " << arr[1] << " Add: " << &arr[1] << "\n";
    cout << "arr[2]: " << arr[2] << " Add: " << &arr[2] << "\n";
    cout << "arr[3]: " << arr[3] << " Add: " << &arr[3] << "\n";
    cout << "arr[4]: " << arr[4] << " Add: " << &arr[4] << "\n";
    cout << "int a: " << &a << "\n";
    cout << "int b: " << &b << "\n";
}

int main(void) {
    tc22();
}