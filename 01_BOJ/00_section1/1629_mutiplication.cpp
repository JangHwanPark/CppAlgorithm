#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll multiplication(ll a, ll b, ll c) {
    if (b == 1) return a % c;
    ll half = multiplication(a, b / 2, c);
    half = (half * half) % c;

    if (b % 2 == 0) return half;
    else return (half * a) % c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;

    // 출력
    cout << multiplication(a, b, c) << "\n";
    return 0;
}