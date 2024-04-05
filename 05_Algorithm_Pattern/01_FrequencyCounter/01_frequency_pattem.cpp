#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <string>
using namespace std;

map<char, int> calculateFrequency(const string& str) {
    map<char, int> frequency;

    // 문자열의 각 문자에 대해 빈도수 계산
    for (char ch : str) frequency[ch]++;

    return frequency;
}

bool canFormPalindrome(const map<char, int>& frequency) {
    int oddCount = 0;

    for (const auto& pair : frequency) {
        if (pair.second % 2 != 0) {
            oddCount++;

            if (oddCount > 1) return false;
        }
    }

    return true;
}

string fromPalindrome(const map<char, int>& frequency) {
    string mid = "";
    string half = "";

    for (const auto& pair : frequency) {
        half += string(pair.second / 2, pair.first);
        if (pair.second % 2 != 0) mid = pair.first;
    }

    string reverseHalf = half;
    reverse(reverseHalf.begin(), reverseHalf.end());
    return half + mid + reverseHalf;
}

int main() {
    string str = "AABBCCDD";
    map<char, int> frequency = calculateFrequency(str);

    // 빈도수 출력
    for (auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << " " << "\n";
    }

    if (canFormPalindrome(frequency)) {
        string palindrome = fromPalindrome(frequency);
        cout << "Palindrome : " << palindrome << "\n";
    } else cout << "Cannot from a palindrome\n";

    return 0;
}
