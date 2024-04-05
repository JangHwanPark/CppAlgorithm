#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num, result = 0;
    cin >> n;

    while (n--) {
        cin >> num;

        bool prime_num = true;
        if (num == 1) continue;

        for (int i = num - 1; i > 1; i--) {
            if (num % i == 0) {
                prime_num = false;
                break;
            }
        }
        if (prime_num) result++;
    }

    cout << result;
    return 0;
}