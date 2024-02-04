// 정수형 스택 생성
// 정수 n, m 선언
// n 입력 받기 (n번 반복)
// 정수 m 입력 받기
//
#include <bits/stdc++.h>
using namespace std;

stack<int> stk;
vector<char> ans;
int n, m, cur = 1;
bool pos = true;

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        while (cur <= m) {
            stk.push(cur++);
            ans.push_back('+');
        }
        if (stk.top() == m) {
            stk.pop();
            ans.push_back('-');
        } else {
            pos = false;
            break;
        }
    }

    if (pos) {
        for (auto &c: ans) {
            cout << c << "\n";
        }
    } else {
        cout << "NO" << "\n";
    }
}