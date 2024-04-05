#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N;
    int cnt[26] = {0};
    string str;
    string ret;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> str;
        cnt[str[0] - 'a']++; // 이름의 첫 글자로 카운트
    }

    /* 5명 이상인 알파벳을 ret에 추가 */
    for (int i = 0; i < 26; i++) {
        if (cnt[i] >= 5) ret += i + 'a';
    }

    /* ret이 비어있지 않으면 출력
     * 비어있지 않다면 PREDAJA 출력 */
    if (ret.size()) cout << ret << "\n";
    else cout << "PREDAJA" << "\n";
}