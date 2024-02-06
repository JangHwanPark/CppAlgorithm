#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string s1 = to_string(a);
    reverse(s1.begin(), s1.end());

    string s2 = to_string(b);
    reverse(s2.begin(), s2.end());

    if (s1 > s2) cout << atoi(s1.c_str());
    else cout << atoi(s2.c_str());
    return 0;
}