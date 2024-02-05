#include <bits/stdc++.h>
using namespace std;
deque<int> dq;

int main(void) {
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(20);
    for (auto x : dq) cout << x << ' ';

    cout << dq.size() << '\n';

    if (dq.empty()) cout << "dq is empty\n";
    else cout << "dq is not empty\n";

    dq.pop_front();
    dq.pop_back();
    cout << dq.back() << '\n';

    dq.push_back(70);
    cout << dq.front() << '\n';

    dq.push_back(12);
    dq[2] = 17;
    dq.insert(dq.begin() + 1, 33);
    dq.insert(dq.begin() + 4, 60);
    for (auto x : dq) cout << x << ' ';
    cout << '\n';

    dq.erase(dq.begin() + 3);
    cout << dq[3];

    // deque의 모든 원소 제거
    dq.clear();
}