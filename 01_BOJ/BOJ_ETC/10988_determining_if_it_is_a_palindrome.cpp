#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;

    string revStr = str;
    reverse(revStr.begin(), revStr.end());

    if (str == revStr) cout << 1;
    else cout << 0;
    return 0;
}