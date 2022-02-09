#include <iostream>
#include <queue>

using namespace std;

int n, m, v, mat[1001][1001]; bool visit[1001];

void dfs(int v) {
    cout << v << ' ';

    visit[v] = true;
    for(int i = 1; i <= n; i++) {
        if(visit[i] || mat[v][i] == 0)  continue;
        dfs(i);
    }
}

void bfs(int v) {
    queue<int> q;
    q.push(v);

    visit[v] = 0;
    while(!q.empty()) {
        v = q.front();
        cout << q.front() << ' ';
        q.pop();
        for(int i = 1; i <= n; i++) {
            if(!visit[i] || !mat[v][i]) continue;
            q.push(i);
            visit[i] = 0;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> v;

    for(int i = 0; i < m; i++) {
        int x, y;   cin >> x >> y;
        mat[x][y] = mat[y][x] = 1;
    }

    dfs(v);
    cout << '\n';
    bfs(v);

    return 0;
}