#include <iostream>
#include <queue>

using namespace std;

int n, k;

int cnt[100002];

bool visit[100002];

void input() {
    cin >> n >> k;
}

void bfs() {
    queue<int> q;

    int pos, new_pos;

    q.push(n);

    while(!q.empty()) {
        pos = q.front();
        q.pop();

        if(pos == k) {
            cout << cnt[pos];
            break;
        }

        new_pos = pos - 1;
        if(0 <= new_pos && new_pos < 100002 && !visit[new_pos]) {
            visit[new_pos] = true;
            q.push(new_pos);
            cnt[new_pos] = cnt[pos] + 1;
        }

        new_pos = pos + 1;
        if(0 <= new_pos && new_pos < 100002 && !visit[new_pos]) {
            visit[new_pos] = true;
            q.push(new_pos);
            cnt[new_pos] = cnt[pos] + 1;
        }

        new_pos = pos * 2;
        if(0 <= new_pos && new_pos < 100002 && !visit[new_pos]) {
            visit[new_pos] = true;
            q.push(new_pos);
            cnt[new_pos] = cnt[pos] + 1;
        }
    }
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