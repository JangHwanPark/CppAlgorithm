#include<bits/stdc++.h>
using namespace std;

int main() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 10000);
    auto randNum = dist(mt);

    for (int i = 0; i < 1000; i++) {
        cout << randNum << ' ';
        randNum = dist(mt);
    }
    return 0;
}