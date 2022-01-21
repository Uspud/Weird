#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int result;
int dp[1001];
int dpdp[1001];
int a[1001];

bool ud[1001];

int main(void) {
    fastio;

    int n;  cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        dp[i] = 1;
        for(int j = 1; j <= i; j++) {   
            if(a[i] > a[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
            else if(a[i] < a[j]) {
                if(ud[j])   dpdp[i] = max(dpdp[i], dpdp[j] + 1);
                else {
                    dpdp[i] = max(dpdp[i], dp[j] + 1);
                    ud[i] = true;
                }
            }
        }
        if(dp[i] > dpdp[i])   ud[i] = false;
        result = max({result, dp[i], dpdp[i]});
    }

    cout << result;

    return 0;
}