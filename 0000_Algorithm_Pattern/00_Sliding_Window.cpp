#include <bits/stdc++.h>
using namespace std;

int maxSumSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) return - 1; // 배열의 크기가 k보다 작으면 -1 반환

    // 초기 윈도우의 합을 계산
    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    // 슬라이딩 윈도우를 이용해 나머지 배열 탐색
    int windowSum = maxSum;

    for (int i = k; i < n; i++) {

        // 새 요소 추가하고, 가장 왼쪽 요소 제거
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // 연속된 3개 요소의 최대 합 출력
    cout << maxSumSlidingWindow(arr, k) << "\n";
    return 0;
}