#include <bits/stdc++.h>
using namespace std;

int h, m;
int main() {
    cin >> h >> m;
    if (m < 45) {h--; m = 60 - (45 - m);
        if (h < 0) h = 23;
        cout << h << " " << m;
    } else cout << h << " " << (m - 45);
}