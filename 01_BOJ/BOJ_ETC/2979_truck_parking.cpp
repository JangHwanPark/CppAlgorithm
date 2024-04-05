#include <bits/stdc++.h>
using namespace std;
int main() {

    /*
     * A, B, C: 각각 1, 2, 3대가 주차했을 때 분당 요금
     * in, out: 트럭이 주차장에 들어오고 나가는 시간
     * cnt: 각 시간대 별로 주차된 트럭의 수를 저장
     * ret: 총 요금 저장
     */
    int A, B, C;
    int in, out;
    int cnt[104] = {0}, ret = 0;
    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++) {

        // 각 트럭의 주차시간 입력
        cin >> in >> out;

        // 주차 시간동안 cnt 배열의 해당 시간대 값을 증가
        for (int j = in; j < out; j++) cnt[j]++;
    }

    /*
     * 각 시간대 별로 요금 계산
     * cnt[i]: 해당 시간대에 주차된 트럭이 있다면 코드 실행
     * cnt[i] == 1: 1대 주차 시
     * cnt[i] == 2: 2대 주차 시
     * cnt[i] == 3: 3대 주차 시
     */
    for (int i = 1; i < 100; i++) {
        if (cnt[i]) {
            if (cnt[i] == 1) ret += A;
            else if (cnt[i] == 2) ret += B * 2;
            else if (cnt[i] == 3) ret += C * 3;
        }
    }

    // 총 요금 출력
    cout << ret << "\n";
    return 0;
}