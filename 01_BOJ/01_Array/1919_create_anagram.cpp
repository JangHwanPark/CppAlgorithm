#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1, str2;
    cin >> str1 >> str2;

    // 영어 알파벳이 26개 문자라 크기 26의 cnt배열 선언
    int cnt1[26] = {0}, cnt2[26] = {0};

    // 문자열 str1과 str2에서 각 문자의 빈도 수 계산
    for (char c : str1) cnt1[c - 'a']++;
    for (char c : str2) cnt2[c - 'a']++;

    int result = 0;

    // 두 문자열에서의 각 문자 빈도 수 차이의 합 계산
    for (int i = 0; i < 26; i++) {
        result += abs(cnt1[i] - cnt2[i]);
    }

    cout << result;
    return 0;
}