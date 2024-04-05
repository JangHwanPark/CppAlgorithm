#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, v, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> v;
    for (int j = 0; j < n; j++) {
        if (a[j] == v) {
            c++;
        }
    }
    cout << c;
}