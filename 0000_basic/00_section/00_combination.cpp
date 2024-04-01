#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1,2,3,4,5};
void print(vector<int> b) {
    for (int i : b) cout << i << " ";
    cout << "\n";
}

// 재귀함수 (4개 이상 뽑을때 사용)
void combiRecursion(int start, vector<int> b) {
    // 기저 사례
    if (b.size() == k) {
        print(b);
        return;
    }

    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combiRecursion(i, b);
        b.pop_back();
    }
}

int main() {
    vector<int> b;
    combiRecursion(-1, b);
    return 0;
}