#include <bits/stdc++.h>
using namespace std;

int main() {
    int dwarfs[10];
    int totalDwarfsSum = 0;

    // 9명의 난쟁이 키 입력
    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
        totalDwarfsSum += dwarfs[i];
    }

    // 오름차순 정렬
    sort(dwarfs, dwarfs + 9);

    // 두명의 난쟁이 찾기
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (totalDwarfsSum - (dwarfs[i] + dwarfs[j]) == 100) {
                for (int k = 0; k < 9; k++) {
                    if (i == k || j == k) continue;
                    cout << dwarfs[k] << "\n";
                }
                return 0;
            }
        }
    }

    return 0;
}