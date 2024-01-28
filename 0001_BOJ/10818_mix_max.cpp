#include <bits/stdc++.h>
using namespace std;

int main() {
    // 입력받을 N정의
    int n;
    cin >> n;

    // 최소 최댓값의 초기값 설정 (문제 요구값 -1000000 ~ 1000000)
    int max = -1000000;
    int min = 1000000;

    // 값을 저장할 배열 정의
    int a[n + 1];

    for (int i = 0; i < n; i++) {
        // 배열에 담을 최대 최소값 입력
        cin >> a[i];

        // max가 a[i](현재 인덱스)보다 작으면 그 값을 max 변수에 저장
        if (max < a[i]) {
            max = a[i];
        }

        // min이 a[i](현재 인덱스)보다 크면 그 값을 min 변수에 저장
        if (min > a[i]) {
            min = a[i];
        }
    }
    cout << min << " " << max;
}