#include <iostream>
#include <queue>

using namespace std;

int m, n;

int box[1000][1000], cnt[1000][1000];

bool visit[1000][1000];

queue<pair<int, int> > q;

void output() {
    int max = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(cnt[i][j] > max) max = cnt[i][j];
            if(box[i][j] == 0)  {
                cout << -1;
                return;
            }
        }
    }

    cout << max;
}

void find() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(box[i][j] == 1)  {
                q.push(make_pair(i, j));
                visit[i][j] = true;
            }
        }
    }
}

void bfs() {
    int x, y, new_x, new_y;

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;

        q.pop();

        for(int i = 0; i < 4; i++) {
            new_x = x + "0121"[i] - '1';
            new_y = y + "1012"[i] - '1';

            if(0 <= new_x && new_x < n && 0 <= new_y && new_y < m) {
                if(box[new_x][new_y] == 0 && !visit[new_x][new_y]) {
                    q.push(make_pair(new_x, new_y));
                    visit[new_x][new_y] = true;
                    cnt[new_x][new_y] = cnt[x][y] + 1;
                    box[new_x][new_y] = 1;
                }
            }
        }
    }
}

void input() {
    cin >> m >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> box[i][j];
        }
    }
}

void solve() {
    input();

    find();

    bfs();

    output();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}