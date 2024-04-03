#include <bits/stdc++.h>
using namespace std;
int n, cnt, res;
int mo[6] = {500, 100, 50, 10, 5, 1};

void tc1() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    res = 1000 - n;
    for (int i = 0; i < 5; i++) {
        cnt += res / mo[i];
        res %= mo[i];
    }
    cout << "cnt: " << cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 380; // 테스트 입력
    // cin >> n;
    res = 1000 - t;

    // 문제 분석
    // 잡화점 : 잔돈으로 500엔, 100엔, 50엔, 10엔, 5엔, 1엔
    // 언제나 거스름돈 개수가 가장 적게 잔돈을 준다.
    // 카운터에서 1000엔 지폐를 한장 냈을 때, 받을 잔돈에 포함된 잔돈의 개수
    // 1000 - 380 = 620
    // = 500 - 1
    // = 100 - 1
    // = 10 - 2

    // 문제1 : temp 값에 요소의 값을 빼버리면 음수값이 나옴
    // 이 문제를 어떻게 해결해야할까?
    // 이 문제를 해결하기위해 화폐단위로 temp 값을 나누고 몫을 cnt에 더한다?
    cout << "\n" << "temp: " << res << "\n";
    cout << "cnt: " << cnt << "\n\n";

    // Why ?
    // Greedy = 주어진 문제상황에서 그리디 선택 속성? + ... 최적의 부분구조
    for (int i : mo) { // for (int i = 0; i < 5; i++)
        cout << "result - " << "cnt: " << cnt << " "<< "temp: " << res << "\n";

        // 카운트 계산 (잔돈의 개수)
        // 화폐 단위를 나눈 몫을 카운트 변수에 더함
        cnt += res / i;
        cout << "cnt += temp / mo[i];" << "\n";
        cout << "cnt: " << cnt << "\n" << "temp: " << res << "\n";
        // 1. cnt = cnt + temp / 500
        // 2. cnt = cnt + temp / 100
        // 3. cnt = cnt + temp / 50
        // 4. cnt = cnt + temp / 10
        // 5. cnt = cnt + temp / 1

        // temp 값을 화폐단위로 나눈 나머지로 갱신
        res %= i;
        cout << "temp %= mo[i];" << "\n";
        cout << "cnt: " << cnt << "\n" << "temp: " << res << "\n\n";
        //
    }

    cout << "temp: " << res << "\n";
    cout << "cnt: " << cnt << "\n\n";

    tc1();
    return 0;
}