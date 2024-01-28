#include <bits/stdc++.h>
using namespace std;
int t, r;
string s;

int main(){
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> s;

        for (int j = 0; j < s.length(); j++) {
            for (int k = 0; k < r; k++) {
                cout << j << k;
                cout << '\n';
                cout << s[j];
            }
        }
        cout << "\n";
    }
}
