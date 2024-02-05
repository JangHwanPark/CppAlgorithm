#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
int n, m, num, cnt = 0;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    while (m--) {
        int idx = 0;
        cin >> num;

        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == num) {
                idx = i;
                break;
            }
        }

        if (idx <= dq.size() / 2) {
            for (int i = 0; i < idx; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
        } else {
            for (int i = 0; i < dq.size() - idx; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
            dq.pop_front();
        }
    }

    cout << cnt;
}