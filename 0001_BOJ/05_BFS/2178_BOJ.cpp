#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int visited[100][100];

void testCase(int dx[], int dy[]) {
    int n = 4, m = 6;
    int arr[100][100] =
            {{1, 0, 1, 1, 1, 1},
             {1, 0, 1, 0, 1, 0},
             {1, 0, 1, 0, 1, 1},
             {1, 1, 1, 0, 1, 1}};

    cout << arr[3][5];
    queue<pair<int, int> > q;

    while (/*큐에 요소가 있으면 실행*/) {
        // visited 0, 0 방문표시
        // 기본값 : 큐에 0,0 삽입
        // 큐 맨 앞요소 팝
        // dx, dy = 상하좌우 이동 경로
    }
}

int main() {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0 ,-1};


    ios_base::sync_with_stdio(false);
    cin.tie();
    //int n, m;
    //cin >> n >> m;

    // print TC
    testCase(dx, dy);
}