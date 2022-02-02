#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

using ll = long long;

int a, b, c;

ll solve(ll x, ll y) {
    if(y == 1) return x % c;
    ll result = solve(x, y / 2);
    result = result * result % c;
    if(y % 2)   return result * x % c;
    return result;
}

int main(void) {
    fastio;

    cin >> a >> b >> c;

    cout << solve(a, b);

    return 0;
}