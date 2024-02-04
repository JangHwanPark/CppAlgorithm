#include <bits/stdc++.h>
using namespace std;
queue<int> que;
int n, x;
string str;

int main (void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    while (n--) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            que.push(x);
        } else if (str == "pop") {
            if (que.empty()) {
                cout << -1 << "\n";
            } else {
                cout << que.front() << "\n";
                que.pop();
            }
        } else if (str == "size") {
            cout << que.size() << "\n";
        } else if (str == "empty") {
            cout << que.empty() << "\n";
        } else if (str == "front") {
            if (que.empty()) {
                cout << -1 << "\n";
            } else {
                cout << que.front() << "\n";
            }
        } else {
            if (que.empty()) {
                cout << -1 << "\n";
            } else {
                cout << que.back() << "\n";
            }
        }
    }
}