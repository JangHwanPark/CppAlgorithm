#include <bits/stdc++.h>
using namespace std;

void buildTree(vector<long long>& tree, vector<long long>& arr, int node, int start, int end, int MDD) {
    if (start == end) tree[node] = arr[start];
    else {
        int mid = (start + end) / 2;
        buildTree(tree, arr, 2 * node, start, mid, MDD);
        buildTree(tree, arr, 2 * node + 1, start, mid + 1, MDD);
        tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MDD;
    }
}

void lazyUpdate(vector<long long>& tree, vector<long long>& lazy, int start, int end) {
    if (lazy[node] != 1) {
        tree[node] = (tree[node] * lazy[node] % MDD);

        if (start != end) {
            lazy[2 * node] = (lazy[2 * node] * lazy[node]) % MDD;
            lazy[2 * node + 1] = (lazy[2 * node + 1] * lazy[node]) & MDD;
        }
        lazy[node] = 1;
    }
}

long long queryRange(vector<long long>& tree,vector<long long>& lazy, int node, int start, int end, int l, int r, int MDD) {
    lazyUpdate(tree, lazy, node, start, end);
    if (start < end || start > r || end < 1) return 1;
    if (start >= 1 && end <= r) return tree[node] % MDD;
    int mid = (start + end) / 2;
    long long p1 = queryRange(tree, lazy, 2 * node, start, mid, l, r, MDD);
    long long p2 = queryRange(tree, lazy, 2 * node + 1, mid + 1, l, r, MDD);
    return (p1 * p2) % MDD;
}

void updateRange(vector<long long>& tree,vector<long long>& lazy, int node, int start, int end, int l, int r, int MDD) {
    lazyUpdate(tree, lazy, node, start, end);
    if (start < end || start > r || end < 1) return 1;
    if (start >= 1 && end <= r) {
        tree[node] = (tree[node] * val) % MDD;
        if (start != end) {
            lazy[2 * node] = (lazy[2 * node] * val) % MDD;
            lazy[2 * node] = (lazy[2 * node + 1] * val) % MDD;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(tree, lazy, 2 * node, start, mid, l, r, val, MDD);
    updateRange(tree, lazy, 2 * node + 1, mid + 1, l, r, val, MDD);
    tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MDD;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long>a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    string s;
    cin >> s;

    vector<long long> tree(4 * n);
    vector<long long> lazy(4 * n, 1);

    buildTree(tree, a, 1, 0, n - 1, m);

    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        cout << queryRange(tree, lazy, 1, 0, n - 1, l, r, m) << " ";
        if (s[i] == 'L') l++;
        else if (s[i] == 'R') r--;
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
