#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int arr[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 'a'] += 1;
    }
    for (int j = 0; j < 26; j++) {
        cout << arr[j] << ' ';
    }
    return 0;
}