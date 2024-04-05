#include <bits/stdc++.h>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fs(lcv, hi) for(int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for(int lcv = hi; lcv >= 0; lcv--)
using namespace std;

void Tests() {
    int n;
    cin >> n;

    vector<int> v(n);
    fs(i,n) cin >> v[i];

    int y = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > y) y = v[i];
        else {
            int k = 1, temp = v[i];
            while (v[i] <= y) {
                v[i] = temp * k;
                k++;
            }

            y = v[i];
        }
    }
    cout << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        Tests();
    }

    return 0;
}
