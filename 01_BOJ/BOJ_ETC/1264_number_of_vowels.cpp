#include <bits/stdc++.h>
using namespace std;

// 문자 c가 모음인지 확인하고 bool값 반환
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s;
    while (true) {
        getline(cin, s);
        if (s == "#") break;

        // count_if 함수를 사용해 문자열 s에서 모음의 개수를 센다.
        int vowelCnt = count_if(s.begin(), s.end(), isVowel);
        cout << vowelCnt << "\n";
    }

    return 0;
}