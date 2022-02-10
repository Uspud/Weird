#include <iostream>

using namespace std;

int m, n, k, ans;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

bool field[50][50], visit[50][50];

void dfs(int x, int y) {
    visit[x][y] = true;

    for(int i = 0; i < 4; i++) {
        int newx = x + dx[i], newy = y + dy[i];

        if(0 <= newx && newx < m && 0 <= newy && newy < n)
            if(field[newx][newy] && !visit[newx][newy])
                dfs(newx, newy);
    }
}

void initialize() {
    ans = 0;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) {
            field[i][j] = false;
            visit[i][j] = false;
        }
}

void input() {
    for(int i = 0; i < k; i++) {
        int x, y;   cin >> x >> y;

        field[x][y] = true;
    }
}

void solve() {
    int t;  cin >> t;

    while(t--) {
        cin >> m >> n >> k;

        initialize();

        input();

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++) {
                if(field[i][j] && !visit[i][j]) {
                    dfs(i, j);
                    ans++;
                }
            }
        
        cout << ans << '\n';
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}