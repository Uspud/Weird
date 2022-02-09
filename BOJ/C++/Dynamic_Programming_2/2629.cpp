#include <iostream>

using namespace std;

bool dp[31][15001]; int weight[30], n;

void solve(int x, int y) {
    if(x > n || dp[x][y])  return;

    dp[x][y] = true;

    solve(x + 1, y + weight[x]);
    solve(x + 1, y);    
    solve(x + 1, abs(y - weight[x]));
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n; 

    for(int i = 0; i < n; i++) cin >> weight[i];

    solve(0, 0);

    int m; cin >> m;

    for(int i = 0; i < m; i++) {
        int cmp;    cin >> cmp;

        if(cmp > 15000) cout << "N ";
        else if(dp[n][cmp]) cout << "Y ";
        else    cout << "N ";
    }

    return 0;
}