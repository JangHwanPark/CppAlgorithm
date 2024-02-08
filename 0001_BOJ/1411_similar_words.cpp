#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> st(n);
    for (int i = 0; i < n; ++i) {
        cin >> st[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            string& st1= st[i];
            string& st2= st[j];

            if (st1.length() != st2.length()) {
                continue;
            }

            unordered_map<char, char> map1, map2;
            bool isSimilar = true;
            for (int k = 0; k < st1.length(); ++k) {
                char c1 = st1[k], c2 = st2[k];
                if (!map1.count(c1) && !map2.count(c2)) {
                    map1[c1] = c2;
                    map2[c2] = c1;
                } else if (map1[c1] != c2 || map2[c2] != c1) {
                    isSimilar = false;
                    break;
                }
            }

            if (isSimilar) {
                ++cnt;
            }
        }
    }

    cout << cnt;
    return 0;
}