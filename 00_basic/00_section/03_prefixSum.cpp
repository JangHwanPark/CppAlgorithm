#include <bits/stdc++.h>
using namespace std;

int arr[100004] = {1,2,3,4,5};
int prefixSum[100004];

int main(void) {
    int n = 8;
    int m = 3;
    int a, b = 5;

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    for (int i = 0; i < m; i++) {
        cout << prefixSum[a] - prefixSum[b - 1] << "\n";
    }
}