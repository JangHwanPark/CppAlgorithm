#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void permutation1(vector<int> a) {
    do {
        for (int i : a) cout << i << " ";
        cout << "\n";
    } while (next_permutation(&a[0], &a[0] + 3));
}

void permutation2() {
    int arr[] = {1, 2, 3};
    do {
        for (int i : arr) cout << i << " ";
        cout << "\n";
    } while (next_permutation(&arr[0], &arr[0] + 3));
}

void permutation3() {

}

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void makePermutation(int n, int r, int depth) {
    cout << n << " : " << r << " : " << depth << '\n';
    if (r == depth) {
        printV(v);
        return;
    }
    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
    return;
}

int main() {
    vector<int> a = {1, 2, 3};
    for (int i = 1; i <= 3; i++) v.push_back(i);
    makePermutation(3, 3, 0);
}