#include <iostream>

#define MAX 0x7fffffff

using namespace std;

int dp[101][10001], app_used[101], cost[101], sum, n, m;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for(int i = 1; i <= n; i++)  cin >> app_used[i];
    for(int i = 1; i <= n; i++) {
        cin >> cost[i];
        sum += cost[i];
    }

    int ans = MAX;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= sum; j++) {
            if(j >= cost[i])    dp[i][j] = max(dp[i-1][j], dp[i-1][j-cost[i]] + app_used[i]);
            else    dp[i][j] = dp[i-1][j];

            if(dp[i][j] >= m)   ans = min(ans, j);
        }
    }

    cout << ans;

    return 0;
}