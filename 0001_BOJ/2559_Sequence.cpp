#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    // 온도 값을 저장할 배열
    int arr[100001];
    for (int i = 0; i < n; i++) cin >> arr[i];

    // 첫 k일 동안의 온도 합을 저장할 변수
    int temperatureSum = 0;

    // 첫 k일동안의 온도 합 계산
    for (int i = 0; i < k; i++) temperatureSum += arr[i];

    /*
     * 초기 최대 온도 합 설정
     * 첫 k일 동안의 온도 합을 초기 최대값으로 설정하여,
     * 알고리즘이 유효한 시작점에서 시작하도록 함 이를 통해,
     * 최소한 이 값보다 크거나 같은 최대 온도 합을 찾을 수 있음을 보장
     */
    int maxTemperatureSum = temperatureSum;

    /*
     * 슬라이딩 윈도우를 이용한 최대 온도 합 계산
     * 윈도우를 한 칸씩 오른쪽으로 이동하면서, 새로 들어온 요소를 더하고,
     * 윈도우에서 벗어난 요소를 빼는 방식으로 최대 합을 갱신
     */
    for (int i = k; i < n; i++) {
        temperatureSum += arr[i] - arr[i - k];
        maxTemperatureSum = max(maxTemperatureSum, temperatureSum);
    }

    cout << maxTemperatureSum;
    return 0;
}