#include<bits/stdc++.h>
using namespace std;
int main(void) {
    string x;
    cin >> x;
    if (x.length() > 1) {
        if (x.substr(0, 2) == "0x") {
            cout << stoi(x, nullptr, 16);
        } else if (x.substr(0, 1) == "0") {
            cout << stoi(x, nullptr, 8);
        } else {
            cout << x;
        }
    }
}