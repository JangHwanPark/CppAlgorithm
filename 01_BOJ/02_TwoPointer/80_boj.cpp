#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int n;
    // cin >> n;
    int tc = 15;
    int st = 1, ed = 1, cnt = 0, res = 0;

    while (st <= ed && ed <= tc) {
        if (cnt < tc) cnt += ed++;
        else {
            if(cnt == tc) res++;
            cnt -= st++;
        }
    }
    cout << res + 1;
}