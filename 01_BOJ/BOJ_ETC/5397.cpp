#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    while (a--) {
        string cmd;
        cin >> cmd;

        list<char> li;
        auto cursor = li.begin();

        for (auto c : cmd) {
            if (c == '<') {
                if (cursor != li.begin()) cursor--;
            } else if (c == '>') {
                if (cursor != li.end()) cursor++;
            } else if (c == '-') {
                if (cursor != li.begin()) {
                    cursor = li.erase(--cursor);
                }
            } else {
                li.insert(cursor, c);
            }
        }

        for (auto c : li) cout << c;
        cout << "\n";
    }
    return 0;
}