#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5, m = 4;
    int arr[101];
    int a, b, c;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        for (int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}