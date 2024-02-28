#include <bits/stdc++.h>
using namespace std;

// 테스트 케이스를 실행하는 함수
void test_case(stringstream& cinInput) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc, n;
    cinInput >> tc;
    while (tc--) {
        cinInput >> n;
        map<string, int> clothes;

        for (int i = 0; i < n; ++i) {
            string garment, type;
            cinInput >> garment >> type;
            clothes[type]++;
        }

        int result = 1;
        for (auto& it : clothes) {
            result *= (it.second + 1);
        }

        // 모든 옷을 입지 않는 경우는 없으므로 1을 빼준다.
        cout << result - 1 << "\n";
    }
}

int main() {
    // 테스트 입력 값을 정의합니다.
    string input = "2\n3\nhat headgear\nsunglasses eyewear\nturban headgear\n3\nmakeup face\nsunglasses face\nmakeup face";
    stringstream cinInput(input);

    // 테스트 케이스를 실행합니다.
    test_case(cinInput);

    return 0;
}
