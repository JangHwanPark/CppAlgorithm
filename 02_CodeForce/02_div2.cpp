#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        int minCells = 0;
        if (k <= n) minCells = 2;
        else minCells = (k / 2) + (k % 2);
        cout << minCells << "\n";
    }
    return 0;
}