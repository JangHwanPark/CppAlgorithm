#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string arr[9] = {"one","two","three","fore","five","six","seven","eight","nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << arr[i-1];
            cout << "\n";
        } else if (i > 9 && i % 2 == 0) {
            cout << "even";
            cout << "\n";
        } else if (i > 9 && i % 2 != 0) {
            cout << "odd";
        }
    }
}