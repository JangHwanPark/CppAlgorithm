#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; // 테스트 케이스의 수
    cin >> tc; // 테스트 케이스 수 입력 받기
    for (int i = 1; i <= tc; ++i) {
        int b; // 변환할 바이트 수
        cin >> b; // 바이트 수 입력 받기
        string s; // 입력 문자열
        cin >> s; // 문자열 S 입력 받기

        string res; // 최종 문자열 결과
        for (int i = 0; i < 8 * b; i += 8) {
            string binaryStr; // 이진수 문자열
            for (int j = i; j < i + 8; ++j) {
                binaryStr += (s[j] == 'I' ? '1' : '0');
            }
            bitset<8> bits(binaryStr); // 문자열을 bitset으로 변환
            char convertedChar = static_cast<char>(bits.to_ulong()); // bitset을 unsigned long으로 변환 후 char로 캐스팅
            res += convertedChar; // 결과 문자열에 추가
        }

        cout << "Case #" << i << ": " << res << "\n"; // 결과 출력
    }
    return 0;
}