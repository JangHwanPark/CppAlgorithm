// 입력받은 문자열을 팰린드롬으로 만들어야함.
#include <bits/stdc++.h>
using namespace std;

pair<bool, string> createPalindrome(const string& input) {
    map<char, int> frequency;
    for (char ch : input) frequency[ch]++;

    int oddCount = 0;
    char oddChar = 0;
    string halfPalindrome;

    for (const auto& p : frequency) {
        if (p.second % 2 != 0) {
            oddCount++;
            oddChar = p.first;
            if (oddCount > 1) return { false, "" };
        }

        halfPalindrome += string(p.second / 2, p.first);
    }

    string palindrome = halfPalindrome;
    if (oddCount == 1) palindrome += oddChar;
    reverse(halfPalindrome.begin(), halfPalindrome.end());
    palindrome += halfPalindrome;

    return { true, palindrome };
}

int main() {
    string input;
    cin >> input;
    auto [canCreate, palindrome] = createPalindrome(input);

    if (canCreate) cout << palindrome;
    else cout << "I'm Sorry Hansoo";
    return 0;
}