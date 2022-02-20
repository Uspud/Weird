#include <iostream>
#include <vector>

#define MAX 20000
#define INF 20000

using namespace std;

int V, E, K;

int weight[MAX][MAX];

void input() {
    cin >> V >> E >> K;

    for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            weight[i][j] = INF;

    for(int i = 0; i < V; i++) {
        int u, v, w;

        cin >> u >> v >> w;

        weight[u][v] = weight[v][u] = w;
    }
}

void djikstra() {
    
}

void solve() {
    input();

    djikstra();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}