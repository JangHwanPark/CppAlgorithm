#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[501][501];
bool vis[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0 ,-1};
int col, row;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> col >> row;
    for (int i = 0; i < col; i++)
        for (int j = 0; j < row; j++)
            cin >> board[i][j];

    int painting_mx = 0;
    int painting_num = 0;

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (board[i][j] == 0 || vis[i][j])
                continue;
            painting_num++;

            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({i, j});

            int area = 0;
            while (!q.empty()) {
                area++;
                pair<int, int> cursor = q.front();
                q.pop();

                for (int dir = 0; dir < 4; dir++) {
                    int nx = cursor.X + dx[dir];
                    int ny = cursor.Y + dy[dir];

                    if (nx < 0 || nx >= col || ny < 0 || ny >= row)
                        continue;

                    if (vis[nx][ny] || board[nx][ny] != 1)
                        continue;

                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }

            painting_mx = max(painting_mx, area);
        }
    }
    cout << painting_num << "\n" << painting_mx;
    return 0;
}