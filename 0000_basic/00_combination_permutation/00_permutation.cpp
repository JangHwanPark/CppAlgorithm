#include <bits/stdc++.h>
using namespace std;

void printPermutations(vector<int>& array, int currentIndex) {
    if (currentIndex == array.size() - 1) {
        for (auto i : array) cout << i << " ";
        cout << "\n";
        return;
    }

    for (int i = currentIndex; i < array.size(); i++) {
        swap(array[currentIndex], array[i]);
        printPermutations(array, currentIndex + 1);
        swap(array[currentIndex], array[i]);
    }
}

int main() {
    vector<int> array = {1, 2, 3};
    printPermutations(array, 0);
    return 0;
}