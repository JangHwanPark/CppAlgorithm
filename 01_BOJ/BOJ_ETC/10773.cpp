// 스택 생성
// 합계 변수 초기화
// 정수 k 입력 받음 (k 번 반복)
    // 정수 n 입력 받음
    // n이 0이 아니면
        // 스택에 n 추가
        // 합계에 n 더함
    // n이 0이면
        // 스택에서 요소 제거
        // 합계에서 마지막으로 추가된 요소 빼기
// 합계 출력
#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> stk;
    int k, n, sum = 0;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n;
        if (n != 0) {
            stk.push(n);
            sum += n;
        } else if (!stk.empty()) {
            sum -= stk.top();
            stk.pop();
        }
    }
    cout << sum;
    return 0;
}