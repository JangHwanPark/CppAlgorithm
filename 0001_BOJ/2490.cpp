#include <bits/stdc++.h>
using namespace std;

int main() {
    int NA, NB, NC, ND;
    for (int i = 0; i < 3; i++) {
        cin >> NA >> NB >> NC >> ND;

        int sum = NA + NB + NC + ND;
        if (sum == 3) cout << "A\n";
        else if (sum == 2) cout << "B\n";
        else if (sum == 1) cout << "C\n";
        else if (sum == 0) cout << "D\n";
        else if (sum == 4) cout << "E\n";
    }
    return 0;
}