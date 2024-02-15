#include <bits/stdc++.h>
using namespace std;
int N;
string file, pattern, prefix, suffix;
int main() {
    cin >> N;
    cin >> pattern;

    int startPos = pattern.find("*");
    prefix = pattern.substr(0, startPos);
    suffix = pattern.substr(startPos + 1);

    for (int i = 0; i < N; i++) {
        cin >> file;
        if (prefix.size() + suffix.size() > file.size()) {
            cout << "NE\n";
        } else {
            if (prefix == file.substr(0, prefix.size()) && suffix == file.substr(file.size() - suffix.size())) {
                cout << "DA\n";
            } else {
                cout << "NE\n";
            }
        }
    }

    return 0;
}