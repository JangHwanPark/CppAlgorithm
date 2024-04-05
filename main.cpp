#include <bits/stdc++.h>
using namespace std;
int n, m, res, temp;
int main() {
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++) {
        cin >> m;t[i] = m;
    }
    sort(t, t + n);
    for (int i : t) {
        temp += i;res += temp;
    }
    cout << res;
    return 0;
}