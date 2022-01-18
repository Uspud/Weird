#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using ll = long long;

ll mem[101] = {0, 1, 1, 1, 2, 2, 3, };

ll dp(ll n) {
    if(mem[n] != 0) {
        return mem[n];
    }
    mem[n] = dp(n-1) + dp(n-5);
    return mem[n];
}

int main(void) {
    fastio;

    ll t, n; cin >> t;

    for(ll i = 0; i < t; i++) {
        cin >> n;
        cout << dp(n) << "\n";
    } 
    return 0;
}