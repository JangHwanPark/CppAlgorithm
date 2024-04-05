#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int n[26] = { 0 };
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        n[s[i] - 65]++;
    }

    int mx = 0;
    int idx = - 1;
    for (int i = 0; i < 26; i++) {
        if (mx < n[i]) {
            mx = n[i];
            idx = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (i == idx) continue;
        if (n[i] == mx) {
            cout << '?';
            return 0;
        }
    }

    cout << (char)(idx + 65);
    return 0;
}