#include <iostream>
#include <vector>
#include <queue>

#define MAX 20000
#define RED 1
#define BLUE 2

using namespace std;

int V, E, visited[MAX];

vector<int> mat[MAX];

void input() {
    cin >> V >> E;

    for(int i = 0; i < E; i++) {
        int u, v;

        cin >> u >> v;

        u--; v--;

        mat[u].push_back(v);
        mat[v].push_back(u);
    }
}

void init() {
    for(int i = 0; i < V; i++) {
        mat[i].clear();
        visited[i] = 0;
    }
}

void bfs() {
    for(int i = 0; i < V; i++) {
        if(!visited[i]) {
            queue<int> q;
            int color = RED;

            visited[i] = color;
            q.push(i);
            while(!q.empty()) {
                int now = q.front();
                q.pop();

                if(visited[now] == RED) color = BLUE;
                else if(visited[now] == BLUE)   color = RED;

                int size = mat[now].size();

                for(int i = 0; i < size; i++) {
                    int next = mat[now][i];
                    if(!visited[next]) {
                        visited[next] = color;
                        q.push(next);
                    }
                }
            }
        }
    } 
}

void output() {
    for(int i = 0; i < V; i++) {
        int size = mat[i].size();
        for(int j = 0; j < size; j++) {
            int next = mat[i][j];
            if(visited[i] == visited[next]) {
                cout << "NO\n";
                return ;
            }
        }
    }
    cout << "YES\n";
}

void solve() {
    input();

    bfs();

    output();

    init();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int K;  cin >> K;

    while(K--)  solve();

    return 0;
}