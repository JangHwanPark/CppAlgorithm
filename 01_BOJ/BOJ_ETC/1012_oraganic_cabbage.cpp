#include <bits/stdc++.h>

using namespace std;

int main(void) {
    /* C++ 입출력 속도 향상을 위한 설정
     * cin, cout의 tie를 끊어 더 빠른 입출력을 가능하게 함 */
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /* T(테스트 케이스 수), M(가로 길이), N(세로 길이), K(배추 위치의 수), X, Y(배추 위치)
     * dx : x축 이동 방향 (동, 북, 서, 남)
     * dy : y축 이동 방향 (동, 북, 서, 남)
     * visited : BFS에서 방문 여부를 저장할 배열 */
    int T, M, N, K, X, Y;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int visited[50][50];

    // 테스트케이스 개수 입력
    cin >> T;
    while (T--) {
        // 가로길이, 세로길이, 위치개수(X, Y)입력
        cin >> M >> N >> K;

        /* 1. memset(...) : 방문한 배열을 0으로 초기화해서 모든 위치를 방문하지 않은 상태로 설정
         * 2. count : 카운트 변수 초기화 (TC마다 카운트 개수 초기화) */
        memset(visited, 0, sizeof(visited));
        int count = 0;

        /* K번 반복하여 배추의 위치 입력받기
         * 1. 배추의 위치(좌표) 입력
         * 2. 해당하는 위치를 방문했다고 표시 (배추가 있음) */
        for (int i = 0; i < K; i++) {
            cin >> X >> Y;
            visited[X][Y] = 1;
        }

        // 모든 위치를 순회하여 배추 탐색 시작
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                /* 배추가 있는 위치에서 BFS 시작
                 * 1. q : BFS를 위한 pair큐 생성
                 * 2. 현재 위치를 큐에 삽입
                 * 3. 현재 위치를 방문했다고 표시 (더 이상 방문하지 않음) */
                if (visited[i][j] == 1) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = 0;

                    /* 큐가 비어있지 않다면 BFS 실행
                     * 1. cx : 현재 위치의 x좌표
                     * 2. cy : 현재 위치의 y좌표
                     * 3. 큐에서 현재 위치 제거 */
                    while (!q.empty()) {
                        int cx = q.front().first;
                        int cy = q.front().second;
                        q.pop();

                        /* 상하좌우 방향에 대해 탐색
                         * 1. nextX : 다음 위치의 x좌표
                         * 2. nextY : 다음 위치의 y좌표 */
                        for (int dir = 0; dir < 4; dir++) {
                            int nextX = cx + dx[dir];
                            int nextY = cy + dy[dir];

                            /* 다음 위치(nextX, nextY)가 범위 내에 있고, 방문하지 않은 배추면
                             * 1. 큐에 다음 위치(nextX, nextY)삽입
                             * 2. 다음 위치를 방문했다고 표시 */
                            if (nextX >= 0 && nextX < M && nextY >= 0 && nextY < N && visited[nextX][nextY] == 1) {
                                q.push({nextX, nextY});
                                visited[nextX][nextY] = 0;
                            }
                        }
                    }

                    /* 하나의 연결 요소(배추그룹)을 전부 탐색했다면
                     * 카운트를 증가시킨다. */
                    count++;
                }
            }
        }

        cout << count << '\n';
    }
}