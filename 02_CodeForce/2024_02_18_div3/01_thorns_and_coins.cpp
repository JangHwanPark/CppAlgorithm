#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        string path;
        cin >> path;

        int coins = -1;
        for (int i = 1; i < n; i++) {
            if (path[i - 1] == path[i] && path[i] == '*') {
                coins = i;
                break;
            }
        }

        if (coins == -1) coins = n;

        int ans = 0;
        for (int i = 0; i < coins; i++) {
            if (path[i] == '@') ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}
