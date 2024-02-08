#include <bits/stdc++.h>
using namespace std;

int adj_matrix[1001][1001];
int visited[1001];
int n, m, v;

void dfs(int v) {
    visited[v] = 1;
    cout << v << " ";

    for (int i = 1; i <= n; i++) {
        if (adj_matrix[v][i] == 1 && visited[i] == 0) dfs(i);
        if (i == n) return;
    }
}

void bfs(int v) {
    queue<int> qe;
    qe.push(v);

    while (!qe.empty()) {
        int next = qe.front();
        visited[next] = 1;
        cout << next << " ";
        qe.pop();

        for (int i = 1; i <= n; i++) {
            if (adj_matrix[next][i] == 1 && visited[i] == 0) {
                qe.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int vertex1, vertex2;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        cin >> vertex1 >> vertex2;
        adj_matrix[vertex1][vertex2] = 1;
        adj_matrix[vertex2][vertex1] = 1;
    }

    dfs(v);

    cout << "\n";
    memset(visited, 0, sizeof(visited));

    bfs(v);
    return 0;
}
