#include <iostream>

#define MOD 1000000007LL
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
using ll = long long;

int n, k;

ll pow(ll b, ll m) {
    if(m == 1)  return b % MOD;
    ll result = pow(b, m / 2);
    result = result * result % MOD;
    if(m % 2)   return result * b % MOD;
    return result;
}

int main(void) {
    fastio;

    cin >> n >> k;
    ll a = 1, b = 1;

    for(int i = 2; i <= n; i++) a = a * i % MOD;

    for(int i = 2; i <= k; i++) b = b * i % MOD;
    for(int i = 2; i <= n - k; i++) b = b * i % MOD;

    b = pow(b, MOD - 2);

    cout << a * b % MOD;

    return 0;
}