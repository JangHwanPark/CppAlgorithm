// Hash Table
#include <bits/stdc++.h>
using namespace std;
int n, m;
string str;
map<string, int> mp;
map<int, string> mp2;
string arr[100004];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        mp[str] = i + 1;
        mp2[i + 1] = str;
        arr[i + 1] = str;
    }

    for (int i = 0; i < m; i++) {
        cin >> str;
        if (atoi(str.c_str()) == 0) cout << mp[str] << "\n";
        else cout << arr[atoi(str.c_str())] << "\n";
    }

    return 0;
}