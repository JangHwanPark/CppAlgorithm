#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    int num;
    while (b != 0) {
        num = a % b;
        a = b;
        b = num;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n" << lcm(a, b);
    return 0;
}