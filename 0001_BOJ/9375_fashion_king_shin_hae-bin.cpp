// C++ 표준 라이브러리의 필요한 헤더 파일을 포함
#include <bits/stdc++.h>
using namespace std;

// 테스트 케이스를 실행하는 함수를 정의
void test_case(stringstream& cinInput) {
    // 입출력 효율을 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc, n;      // 테스트 케이스 수와 의상 수에 대한 변수를 선언
    cinInput >> tc; // stringstream에서 테스트 케이스 수를 입력받음

    // 각 테스트 케이스에 대해 반복
    while (tc--) {

        // stringstream에서 의상 수를 입력받음
        cinInput >> n;

        // 각 종류별 의상 수를 저장하기 위한 맵을 선언한다
        map<string, int> clothes;

        // 각 의상의 이름과 종류를 stringstream에서 입력받음
        for (int i = 0; i < n; ++i) {
            string garment, type;
            cinInput >> garment >> type;

            // 해당 종류의 의상 수를 증가
            clothes[type]++;
        }

        // 결과값을 1로 초기화(기본 케이스)
        int result = 1;

        // 가능한 조합의 수를 계산
        for (auto& it : clothes) {
            result *= (it.second + 1);
        }

        // 의상을 하나도 입지 않는 경우를 제외
        cout << result - 1 << "\n";
    }
}

int main() {
    // 테스트 입력 값을 정의
    string input = "2\n3\nhat headgear\nsunglasses eyewear\nturban headgear\n3\nmakeup face\nsunglasses face\nmakeup face";

    // 입력 문자열을 사용하여 cin을 시뮬레이션하기 위해 stringstream을 사용
    stringstream cinInput(input);

    // 테스트 케이스를 실행
    test_case(cinInput);
    return 0;
}
