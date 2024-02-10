#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int divisors[n]; // 약수를 저장할 배열

    // 약수 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> divisors[i];
    }

    // 최소값 찾기
    int min_divisor = *min_element(divisors, divisors + n);
    // 최대값 찾기
    int max_divisor = *max_element(divisors, divisors + n);
    cout << min_divisor * max_divisor;
    return 0;
}