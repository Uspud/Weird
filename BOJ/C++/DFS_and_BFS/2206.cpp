#include <iostream>
#include <queue>

using namespace std;

int n, m;

bool mat[1000][1000];
bool visit[1000][1000][2];
int cnt[1000][1000];

typedef struct{
    int x, y, stat;
} st;

void input() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
    
        for(int j = 0; j < m; j++) {
            mat[i][j] = str[j] - '0';
        }
    }
}

void bfs() {
    queue<st> q;

    visit[0][0][0] = visit[0][0][1] = true;
    q.push({0, 0, 0});

    while(!q.empty()) {
        int x, y, new_x, new_y;
        bool stat;

        x = q.front().x;
        y = q.front().y;
        stat = q.front().stat;

        q.pop();

        for(int i = 0; i < 4; i++) {
            new_x = x + "1012"[i] - '1';
            new_y = y + "0121"[i] - '1';

            if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n) {
                if(!mat[new_y][new_x] && !visit[new_y][new_x][stat]) {
                    q.push({new_x, new_y, stat});
                    visit[new_y][new_x][stat] = true;
                    cnt[new_y][new_x] = cnt[y][x] + 1;
                }
                else if(mat[new_y][new_x] && !stat && !visit[new_y][new_x][true]) {
                    q.push({new_x, new_y, true});
                    visit[new_y][new_x][true] = true;
                    cnt[new_y][new_x] = cnt[y][x] + 1;
                }
            }

            if(new_x == m - 1 && new_y == n-1) {
                cout << cnt[n - 1][m - 1] + 1;
                return ;
            }
        }
    }

    if(n == 1 && m == 1)    cout << 1;
    else    cout << -1;
}

void solve() {
    input();

    bfs();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}