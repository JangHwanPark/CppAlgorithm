#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d = 0, arr[10] = {0,};
    //cin >> a >> b >> c;
    //d = a * b * c;
    d = 17037300;
    string s = to_string(d);
    cout << s << '\n';
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << ' ';
        arr[s[i] - '0']++;
    }
    cout << '\n';
    for (int j = 0; j < 10; j++) {
        //cout << arr[j] << "\n";
        cout << arr[j] << " ";
    }
}