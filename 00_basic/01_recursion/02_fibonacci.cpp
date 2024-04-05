#include <bits/stdc++.h>
using namespace std;

/**
 * 피보나치 수열의 n번째 항을 계산하는 재귀 함수
 * @param n 계산하고자 하는 피보나치 수열의 항
 * @return 피보나치 수열의 n번째 항의 값
 *
 * 피보나치 수열은 각 항이 바로 앞의 두 항의 합으로 구성되는 수열이다.
 * 첫 번째와 두 번째 항은 각각 0과 1로 정의되며, 그 이후의 항은 F(n) = F(n - 1) + F(n - 2)로 계산된다.
 * 피보나치 수열은 반복적인 합산으로 구성된다.
 *
 * F : 피보나치 수열의 각 항을 나타내는 함수
 * F(n) : 피보나치 수열의 n번째 항
 * 피보나치 수열은 특정 규칙을 따르는 수의 나열로, 첫 번째 항 F(0)은 0, 두 번째 항 F(1)은 1로 시작하고,
 * 그 다음 항부터는 바로 앞의 두 항의 합으로 정의된다.
 */
int fibonacci(int n) {
    // 기저 조건
    if (n == 0) return 0;   // 첫 번째 항
    if (n == 1) return 1;   // 두 번째 항

    // 재귀 호출
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "계산하려면 피보나치 수열의 항을 입력하세요: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}