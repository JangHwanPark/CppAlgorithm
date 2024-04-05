#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if (n == 0 || n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int factorial(int n) {
    cout << "n: " << n << "\n";
    if(n == 0) return 1; // 0! = 1
    int res = n * factorial(n - 1);
    cout << "res: " << res << "\n";
    return res; // n * n - 1
}

int factorial2(int n) {
    int ret = 1; // 팩토리얼 초기값 = 1
    for (int i = n; i > 0; --i) {
        cout << "n: " << i << " ret: " << ret << "\n";
        ret *= i;
    }
    return ret;
}

int main() {
    cout << factorial(6) << "\n";
    cout << "\n";
    cout << factorial2(6) << "\n";
    cout << "\n";
    cout << fibo(5) << "\n";
}