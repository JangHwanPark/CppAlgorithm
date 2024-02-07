#include <bits/stdc++.h>
using namespace std;
int main() {
    while (true) {
        int num;
        cin >> num;
        if (num == 0) break;

        string tmp = to_string(num);
        reverse(tmp.begin(), tmp.end());
        int res = atoi(tmp.c_str());

        if (num == res) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}