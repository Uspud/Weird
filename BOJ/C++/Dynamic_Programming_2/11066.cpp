#include <iostream>
#define INT_MAX 0x7fffffff

using namespace std;

int dp[501][501], novel[501], sum[501];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;  cin >> t;

    while(t--) {
        int k;  cin >> k;
        
        for(int i = 1; i <= k; i++) {
            cin >> novel[i];
            sum[i] = sum[i-1] + novel[i];
        }
        
        for(int i = 1; i <= k; i++) {
            for(int j = 1; j + i <= k; j++) {
                dp[j][j + i] = INT_MAX;
                for(int m = j; m < i + j; m++) {
                    dp[j][j + i] = min(dp[j][j + i], dp[j][m] + dp[m + 1][j + i] + sum[j + i] - sum[j - 1]);
                }
            }
        }
        cout << dp[1][k] << '\n';
    }

    return 0;
}