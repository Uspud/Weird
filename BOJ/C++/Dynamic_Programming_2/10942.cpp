#include <iostream>

using namespace std;

int num[2001];  bool dp[2001][2001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;

    for(int i = 1; i <= n; i++)  cin >> num[i];

    int m;  cin >> m;

    for(int i = 1; i <= n; i++) {
        dp[i][i] = 1;
        if(num[i] == num[i+1] && i != n)   dp[i][i+1] = true;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            if(num[j] == num[j+i] && dp[j+1][j+i-1] == true)    dp[j][j+i] = true;
        }
    }

    for(int i = 0; i < m; i++) {
        int a, b;   cin >> a >> b;

        cout << dp[a][b] << '\n';
    }

    return 0;
}