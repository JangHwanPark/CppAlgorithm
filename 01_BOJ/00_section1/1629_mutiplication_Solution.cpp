#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c;
ll testCase(ll x, ll y) {
    if (y == 1) return x % c;
    ll ret = testCase(x, y / 2);
    ret = (ret * ret) % c;

    if (y % 2) ret = (ret * x) % c;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;
    cout << testCase(a, b) << "\n";
    return 0;
}