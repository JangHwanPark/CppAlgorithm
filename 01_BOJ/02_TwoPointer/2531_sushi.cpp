/* 회전 초밥 음식점의 벨트 상태, 메뉴에 있는 초밥의 가짓수,
 * 연속해서 먹는 접시의 개수, 쿠폰 번호가 주어졌을 때,
 * 손님이 먹을 수 있는 초밥 가짓수의 최댓값을 구하는 프로그램을 작성하시오.
 * */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
     * n : 회전 초밥 벨트에 놓인 접시의 수
     * d : 초밥의 가짓수
     * k : 연속해서 먹는 접시의 수
     * c : 쿠폰 번호
     */
    int n, d, k, c;
    cin >> n >> d >> k >> c;

    vector<int> sushi(n);
    for (int i = 0; i < n; i++) {
        cin >> sushi[i];
    }

    // 초밥 종류별로 카운트할 배열, d+1로 초기화
    vector<int> count(d + 1, 0);

    // 현재 윈도우에 있는 초밥의 종류 수
    int total = 0;

    // 먹을 수 있는 최대 초밥 종류 수
    int maxTypes = 0;

    // 초기 윈도우 설정
    for (int i = 0; i < k; i++) {
        if (count[sushi[i]] == 0) total++;
        count[sushi[i]]++;
    }

    // 쿠폰 초밥 추가
    count[c]++;
    if (count[c] == 1) total++;
    maxTypes = total;

    // 전체 벨트를 순회하기 위해 n까지 반복
    for (int i = 0; i < n; i++) {

        // 윈도우에서 초밥 제거
        if (count[sushi[i]]-- == 1) total--;

        // 윈도우에 초밥 추가
        if (count[sushi[(i + k) % n]]++ == 0) total++;

        // 쿠폰 초밥 체크
        maxTypes = max(maxTypes, total + (count[c] == 0 ? 1 : 0));
    }

    cout << maxTypes << "\n";
    return 0;
}