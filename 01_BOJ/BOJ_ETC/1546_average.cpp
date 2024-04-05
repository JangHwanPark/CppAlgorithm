#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, score[1000] = {}, maxScore = 0;
    double avg = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> score[i];
        maxScore = max(maxScore, score[i]);
    }

    for (int i = 0; i < n; i++) {
        avg += (double)score[i] / maxScore * 100;
    }

    cout << avg / n;
    return 0;
}