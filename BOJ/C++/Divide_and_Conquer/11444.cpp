#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기
#define MOD 1000000007LL

using namespace std;
using ll = long long;

void multi(ll a[2][2], ll b[2][2]) {
    ll temp[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            temp[i][j] = 0;
            for(int k = 0; k < 2; k++)  temp[i][j] += a[i][k] * b[k][j];
            temp[i][j] %= MOD;
        }
    }

    for(int i = 0; i < 2; i++) 
        for(int j = 0; j < 2; j++)
            a[i][j] = temp[i][j];
}

int main(void) {
    fastio;

    ll n;  cin >> n; n--;

    ll mat_1[2][2] = {{1,1},{1,0}}, fib[2][2] = {{1, 0}, {0, 0}};
    ll remain[2][2] = {{1, 0}, {0, 1}};

    while(true) {
        if(n == 1 || !n) {
            multi(mat_1, remain);
            break;
        }
        if(n % 2)   multi(remain, mat_1);
        multi(mat_1, mat_1);
        n /= 2;
    }

    multi(fib, mat_1);

    cout << fib[0][0] % MOD;

    return 0;
}