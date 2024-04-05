#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[100001];
    bool b[2000001];
    int n, x, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    for(int i = 0; i < n; i++) {
        if (x - a[i] > 0 && b[x - a[i]]) {
            ans++;
        }
        b[a[i]] = true;
    }
    cout << ans;
    return 0;
}