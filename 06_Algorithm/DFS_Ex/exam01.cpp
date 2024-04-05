#include <bits/stdc++.h>
using namespace std;

bool visited[9];
vector<int> graph[9];

void dfs(int x) {
    visited[x] = true;
    cout << x << " ";   // 방문한 노드 출력

    // 인접한 노드 사이즈만큼 탐색
    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];

        // 방문하지 않았으면(visited = false일때 not을 해주면 true므로)
        // dfs 함수 호출(재귀)
        if (!visited[y]) {
            dfs(y);
        }
    }
}

int main() {
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);

    graph[2].push_back(1);
    graph[2].push_back(7);

    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);

    graph[4].push_back(3);
    graph[4].push_back(5);

    graph[5].push_back(3);
    graph[5].push_back(4);

    graph[6].push_back(7);

    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);

    graph[8].push_back(1);
    graph[8].push_back(7);

    cout << "DFS Exam" << "\n";
    dfs(1);
}