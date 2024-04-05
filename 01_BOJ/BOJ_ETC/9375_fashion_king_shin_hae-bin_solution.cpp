// C++ 표준 라이브러리의 필요한 헤더 파일을 포함
#include <bits/stdc++.h>
using namespace std;

int tc, n;      // 테스트 케이스 수와 의상 수에 대한 변수를 선언
string a, b;    // 개별 의상과 그 종류를 저장하기 위한 문자열 변수를 선언

int main() {
    cin >> tc;

    // 각 테스트 케이스에 대해 반복한다
    while (tc--) {

        map<string, int> _map;  // 각 종류별 의상 수를 저장하기 위한 맵을 선언
        cin >> n;               // 의상 수를 입력받음

        for (int i = 0; i < n; i++) {
            cin >> a >> b;  // 각 의상의 이름과 종류를 입력받음
            _map[b]++;      // 해당 종류의 의상 수를 증가
        }

        // 결과값을 1로 초기화(기본 케이스)
        long long ret = 1;

        // 가능한 조합의 수를 계산
        for (auto c : _map) ret *= ((long long)c.second + 1);
        ret--;                  // 의상을 하나도 입지 않는 경우를 제외
        cout << ret << "\n";    // 이 테스트 케이스에 대한 결과를 출력
    }

    return 0;
}
