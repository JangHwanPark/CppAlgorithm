#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int sum = 0;

int main() {
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    cout << sum;
    return 0;
}