#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string n;
    cin >> n;
    int a[10]={0}, c = 0, mct = 0;
    for (int i = 0; i < n.length(); i++) {
        int b = n[i] - '0';
        a[b]++;
    }
    c = (a[6] + a[9] + 1) / 2;
    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) {
            mct = max(mct, a[i]);
        }
    }
    mct = max(mct, c);
    cout << mct;
}