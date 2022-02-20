#include <iostream>
#include <queue>

using namespace std;

int t, l, cnt[300][300];

pair<int, int> start, goal;

void input() {
    cin >> l;

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    start = make_pair(a, b);
    goal = make_pair(c, d);
}

void init() {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < l; j++) {
            cnt[i][j] = 0;
        }
    }
}

void bfs() {
    int x, y, nx, ny, ans = 0;
    
    queue<pair<int, int>> q;

    q.push(start);

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;

        q.pop();

        for(int i = 0; i < 8; i++) {
            nx = x + "43104310"[i] - '2';
            ny = y + "34431001"[i] - '2';

            if(nx >= 0 && nx < l && ny >= 0 && ny < l) {
                if(!cnt[ny][nx]) {
                    q.push(make_pair(nx, ny));
                    cnt[ny][nx] = cnt[y][x] + 1;
                }
                
                if(nx == goal.first && ny == goal.second) {
                    ans = cnt[ny][nx];
                }
            }
        }
    }
    cout << ans << '\n';
}

void solve() {
    input();

    if(start.first == goal.first && start.second == goal.second) {
        cout << 0 << '\n';
        return;
    }

    init();

    bfs();
    // for(int i = 0; i < l; i++) {
    //     for(int j = 0; j < l; j++)
    //         cout << cnt[i][j] << ' ';
    //     cout << '\n';
    // }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;  cin >> t;
    
    while(t--) solve();

    return 0;
}