#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include <string>
using namespace std;

int main() {
    string str = "AABBCCDD";
    map<char, int> frequency;

    // 문자열의 각 문자에 대해 빈도수 계산
    for (char ch : str) {
        frequency[ch]++;
    }

    // 빈도수 출력
    for (auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << " " << "\n";
    }

    return 0;
}
