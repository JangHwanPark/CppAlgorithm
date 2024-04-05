#include <bits/stdc++.h>
using namespace std;

void updateValue(int& ref) {
    ref = 100; // 참조를 통해 전달된 변수의 값을 변경
}

int main() {
    int a = 5;
    updateValue(a); // a의 값을 updateValue 함수를 통해 변경
    cout << a; // 출력: 100, 함수 내의 변경이 외부 변수에도 반영됨
    return 0;
}
