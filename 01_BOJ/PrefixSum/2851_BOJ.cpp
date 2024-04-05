#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int arr[10] = {10,20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr2[10] = {1, 2, 3,5,8, 13,21,34,55,89};
    int arr3[10] = {40,40,40,40,40,40,40,40,40,40};
    int prefixSum = 0, res = 0;

    for (int i = 0; i < 10; i++) {
        if (prefixSum < 100) {
            prefixSum += arr[i];

            if (prefixSum - 100 < 100 - arr[i + 1]) {
                res = prefixSum;
            }
        }
    }
    cout << "result: " << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[10], prefixSum = 0, res = 0;
    for (int i = 0; i < 10; i++) cin >> arr[i];

    for (int i = 0; i < 10; i++) {
        if (prefixSum < 100) {
            prefixSum += arr[i];

            if (prefixSum - 100 < 100 - arr[i + 1]) {
                res = prefixSum;
            }
        }
    }

    cout << res;
    return 0;
}