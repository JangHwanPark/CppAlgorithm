#include <bits/stdc++.h>
using namespace std;
int main() {
    int le = 5, num = 0, res = 0;
    cin >> le;

    string st;
    cin >> st;

    for (int i = 0; i < st.length(); i++) {
        num = st[i] - 96;
        double square = pow(31, i);
        res += num * (int)square;
    }

    cout << res;
    return 0;
}