#include <iostream>

using namespace std;

int coin[100], dp[10001], n, k;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    dp[0] = 1;
    for(int i = 0; i < n; i++)
        for(int j = coin[i]; j <= k; j++) 
            dp[j] += dp[j - coin[i]];

    cout << dp[k];

    return 0;
}