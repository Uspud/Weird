#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int m, n, h;

int box[100][100][100], cnt[100][100][100];
bool visit[100][100][100];

queue<tuple<int, int, int> > q;

void input() {
    cin >> m >> n >> h;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                cin >> box[i][j][k];
            }
        }
    }
}

void check() {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                if(box[i][j][k] == 1) {
                    q.push(make_tuple(i, j, k));
                    visit[i][j][k] = true;
                }
            }
        }
    }
}

void bfs() {
    int x, y, z, new_x, new_y, new_z;

    while(!q.empty()) {
        tuple<int, int, int> t = q.front();

        x = get<1>(t);
        y = get<2>(t);
        z = get<0>(t);

        q.pop();

        for(int i = 0; i < 6; i++) {
            new_x = x + "021111"[i] - '1';
            new_y = y + "110211"[i] - '1';
            new_z = z + "111102"[i] - '1';

            if(0 <= new_x && new_x < n && 0 <= new_y && new_y < m && 0 <= new_z && new_z < h)
                if(!visit[new_z][new_x][new_y] && box[new_z][new_x][new_y] == 0) {
                    q.push(make_tuple(new_z, new_x, new_y));
                    visit[new_z][new_x][new_y] = true;
                    box[new_z][new_x][new_y] = 1;
                    cnt[new_z][new_x][new_y] = cnt[z][x][y] + 1;
                }
        }
    }
}

void output() {
    int max = 0; 
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                if(box[i][j][k] == 0) {
                    cout << -1;
                    return;
                }
                if(max < cnt[i][j][k])  max = cnt[i][j][k];
            }
        }
    }

    cout << max;
}

void solve() {
    input();

    check();

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