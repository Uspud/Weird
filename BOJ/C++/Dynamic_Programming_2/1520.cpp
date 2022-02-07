#include <iostream>

using namespace std;

int map[501][501], dp[501][501], m, n; bool visited[501][501];

int dfs(int x, int y) {
    if(x == m && y == n)    return 1;
    if(dp[x][y] != -1)  return dp[x][y];

    dp[x][y] = 0;
    if(x + 1 <= m && map[x+1][y] < map[x][y] && !visited[x+1][y]) {
        visited[x+1][y] = true;
        dp[x][y] += dfs(x+1, y);
        visited[x+1][y] = false;
    }

    if(y + 1 <= n && map[x][y+1] < map[x][y] && !visited[x][y+1]) {
        visited[x][y+1] = true;
        dp[x][y] += dfs(x, y+1);
        visited[x][y+1] = false;
    }

    if(x >= 2 && map[x-1][y] < map[x][y] && !visited[x-1][y]) {
        visited[x-1][y] = true;
        dp[x][y] += dfs(x-1,y);
        visited[x-1][y] = false;
    }

    if(y >= 2 && map[x][y-1] < map[x][y] && !visited[x][y-1]) {
        visited[x][y-1] = true;
        dp[x][y] += dfs(x, y-1);
        visited[x][y-1] = false;
    }

    return dp[x][y];
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;

    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++) {
            cin >> map[i][j];
            dp[i][j] = -1;
        }
    
    
    cout << dfs(1, 1);

    return 0;
}