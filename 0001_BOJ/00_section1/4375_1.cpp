#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "종료는 컨트롤 + D" << "\n";

    int n;
    while (cin >> n) {
        int num = 1;
        int res = 1;

        while (num % n != 0) {
            num = num % n;
            num = num * 10 + 1;
            res++;
        }

        cout << res << "\n";
    }

    cout << "\n";
    cout << "입력 받은 n이 3이라고 가정" << "\n";
    cout << "Loop 1: " << 1 % 3 << " " << ", 길이: 1(1)" << "\n";
    cout << "Loop 2: " << 11 % 3 << " " << ", 길이: 2(11)" << "\n";
    cout << "Loop 3: " << 21 % 3 << " " << ", 길이: 3(111)" << "\n";
    cout << "n의 나머지가 0이되므로 1의 길이 3반환" << "\n";
    cout << "길이 res는 1로만 이루어진 숫자의 길이를 추상화한 것" << "\n";
    cout << "루프마다 1이 추가되는게 아닌 숫자의 길이가 증가하는 것을 의미" << "\n";
    return 0;
}