#include <bits/stdc++.h>
using namespace std;
int n;
string a[20000];

bool comp(string n1, string n2) {
    if (n1.length() == n2.length()) {
        return n1 < n2;
    }
    return n1.length() < n2.length();
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a , a + n, comp);
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i - 1]) {
            continue;
        }
        cout << a[i] << "\n";
    }

    return 0;
}