#include <bits/stdc++.h>

using namespace std;

bool visited[100][100];

void testCase(const int dx[], const int dy[]) {
    int n = 4, m = 6;
    int arr[100][100] =
            {{1, 0, 1, 1, 1, 1},
             {1, 0, 1, 0, 1, 0},
             {1, 0, 1, 0, 1, 1},
             {1, 1, 1, 0, 1, 1}};

    queue<pair<int, int> > q;
    visited[0][0] = true;
    q.push(pair<int, int>(0,0));

    while (!q.empty()) {
        pair<int, int> cursor = q.front();q.pop();
        cout << '(' << cursor.first << ", " << cursor.second << ") -> ";
        for (int dir = 0; dir < 4; dir++) {
            int nx = cursor.first + dx[dir];
            int ny = cursor.second + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (visited[nx][ny] || arr[nx][ny] == 0) continue;

            visited[nx][ny] = visited[cursor.first][cursor.second] + 1;
            q.push(pair<int, int>(nx,ny));
        }
    }

    cout << visited[n-1][m-1] << "\n";
}

int main() {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    memset(visited, 0, sizeof(visited));
    testCase(dx, dy);
    return 0;
}