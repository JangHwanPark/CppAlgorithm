#include <bits/stdc++.h>
using namespace std;

int N, sum = 0, minVal = 99;
int main() {
    for (int i = 0; i < 7; i++) {
        cin >> N;
        if (N % 2 == 1) {
            sum += N;
            if (minVal > N) {
                minVal = N;
            }
        }
    }
    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << "\n" << minVal;
    }
    return 0;
}