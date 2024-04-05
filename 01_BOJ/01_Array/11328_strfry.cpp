#include <bits/stdc++.h>
using namespace std;

// 빈도수 저장 패턴
void charArrayTest() {
    char c1[1001] = {'a', 'b', '\0'};
    char c2[1001] = {'b', 'a', '\0'};
    char c3[1001] = {'g', 'n', 'i', 'r'};
    char c4[1001] = {'g', 'n', 'i', 'r'};

    cout << "입력: " << c1 << " " << c2 << "\n";

    // 각 문자의 출현 횟수를 저장할 배열
    int count1[26] = {0};
    int count2[26] = {0};

    // c1의 각 문자에 대한 출현 횟수 계산
    for (int i = 0; c1[i]; i++) {
        count1[c1[i] - 'a']++;
    }

    // c2의 각 문자에 대한 출현 횟수 계산
    for (int i = 0; c2[i]; i++) {
        count2[c2[i] - 'a']++;
    }

    // 두 배열 비교
    bool isPossible = true;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isPossible = false;
            break;
        }
    }

    if (isPossible) cout << "Possible" << "\n";
    else cout << "Impossible" << "\n";
}

void charArrayMain() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char c1[1001], c2[1001];
        int cnt1[26] = {0}, cnt2[26] = {0};
        bool isPossible = true;
        cin >> c1 >> c2;
        cout << c1[i] << c2[i];

        for (int j = 0; c1[j]; j++) cnt1[c1[j] - 'a']++;
        for (int j = 0; c2[j]; j++) cnt2[c2[j] - 'a']++;

        for (int j = 0; j < 26; j++) {
            if (cnt1[j] != cnt2[j]) {
                isPossible = false;
                break;
            }
        }

        if (isPossible) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }
}

void stringTest() {
    // Test
    string s1 = "ring", s2 = "gnir"; // Possible
    string s11 = "newt", s22 = "twan"; // Impossible

    cout << "before: " << s1 << " " << s2 << "\n";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout << "after: " << s1 << " " << s2 << "\n";

    if (s1 == s2) cout << "Possible" << "\n";
    else cout << "Impossible" << "\n";
}

void stringMain() {
    int n;
    cin >> n;
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << n << " " << s1 << " " << s2 << "\n";
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }
}

int main() {
    charArrayTest();
    charArrayMain();
    // stringTest();
    // stringMain();
    return 0;
}