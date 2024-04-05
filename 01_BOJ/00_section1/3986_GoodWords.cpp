#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        stack<char> stack;
        for (char c : s) {
            // 스택의 맨 위 문자와 현재 문자가 같으면 제거
            if (!stack.empty() && stack.top() == c) stack.pop();

            // 그렇지 않으면 스택에 추가
            else stack.push(c);
        }

        if (stack.empty()) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}