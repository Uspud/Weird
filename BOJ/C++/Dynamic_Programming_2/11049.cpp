#include <iostream>

#define INT_MAX 0x7fffffff

using namespace std;

int dp[501][501], matrix[501][2];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;  cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> matrix[i][0] >> matrix[i][1];
    }

    for(int i = 1; i <= n; i++)
        for(int j = 1; j + i <= n; j++) {
            dp[j][j + i] = INT_MAX;
            for(int k = j; k < j + i; k++) 
                dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k+1][i+j] + matrix[j][0] * matrix[k][1] * matrix[i+j][1]);
        }
    
    cout << dp[1][n];
    
    return 0;
}