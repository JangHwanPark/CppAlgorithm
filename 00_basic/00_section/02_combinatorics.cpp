/**
 * 조합 : 순서를 고려하지 않고 n개의 다른 원소 중에서 r개를 선택하는것 */
#include <bits/stdc++.h>
using namespace std;

void combinations(vector<int>& combo, int start, int n, int r) {
    if (r == 0) {
        for (int i : combo) cout << i << " ";
        cout << "\n";
        return;
    }

    for (int i = start; i <= n; i++) {
        combo.push_back(i);
        combinations(combo, i + 1, n, r - 1);
        combo.pop_back();
    }
}

int main() {
    int n = 5, r = 3;
    vector<int> combo;
    combinations(combo, 1, n, r);
    return 0;
}