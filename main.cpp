#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    list<int> li;
    for (int i = 1; i <= n; i++) li.push_back(i);

    auto cursor = li.begin();
    cout << "<";

    while (!li.empty()){
        for (int i = 0; i < k - 1; i++) {
            cursor++;
            if (cursor == li.end()) {
                cursor = li.begin();
            }
        }

        cout << *cursor;
        cursor = li.erase(cursor);
        if (cursor == li.end()) cursor = li.begin();
        if (!li.empty()) cout << ", ";
    }

    cout << ">";
    return 0;
}