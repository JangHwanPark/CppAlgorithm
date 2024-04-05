#include <bits/stdc++.h>
using namespace std;

long long divideAndConquer(int base, int exponent) {
    // 지수가 0이면 무조건 1을 반환
    if (exponent == 0) return 1;

    // 값을 분할하여 계산
    long long halfDivide = divideAndConquer(base, exponent / 2);

    // 지수가 짝수라면
    if (exponent % 2 == 0) return halfDivide * halfDivide;

    // 지수가 홀수라면
    else return halfDivide * halfDivide * base;
}

int main () {
    // 분할정복 함수(divideAndConquer)테스트
    int base = 10;      // 밑
    int exponent = 11;  // 지수

    // 거듭제곱 계산 및 결과 출력
    long long res = divideAndConquer(base, exponent);
    cout << "밑(base) " << base << "의 " << exponent << "승은 " << res << "입니다." << "\n";
    return 0;
}