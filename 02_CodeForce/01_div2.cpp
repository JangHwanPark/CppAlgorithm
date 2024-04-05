#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int maxBeauty = a[n-1] - a[0];
        cout << maxBeauty << "\n";
    }
    return 0;
}