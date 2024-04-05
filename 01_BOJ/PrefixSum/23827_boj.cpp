#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long nums;
        cin >> nums;
        sum = (sum + (nums * (1LL << (n - 1)))) % 1000000007;
    }
    cout << sum;
    return 0;
}