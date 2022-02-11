#include <iostream>
#include <queue>

using namespace std;

int n, m, ans;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

string maze[101]; bool visit[100][100];

int cnt[100][100];

void input() {
    for(int i = 0; i < n; i++)
        cin >> maze[i];
}

void bfs() {
    int x = 0, y = 0;

    visit[x][y] = true;

    queue<pair<int, int> > q;
    q.push(make_pair(x, y));

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if(0 <= new_x && new_x < n && 0 <= new_y && new_y < m)
                if(!visit[new_x][new_y] && maze[new_x][new_y] == '1') {
                    visit[new_x][new_y] = true;
                    cnt[new_x][new_y] = cnt[x][y] + 1;
                    q.push(make_pair(new_x, new_y));
                }
        }
    }

    ans = cnt[n - 1][m - 1] + 1;
}

void solve() {
    cin >> n >> m;

    input();

    bfs();

    cout << ans;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();

    return 0;
}