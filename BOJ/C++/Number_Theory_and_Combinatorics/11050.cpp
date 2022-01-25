#include <iostream>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int mem[1001][1001];

int solve(int a, int b) {
    if(a <= 1)  return 1;
    if(mem[a][b] != 0)  return mem[a][b];

    mem[a][b] = (solve(a-1, b-1) + solve(a-1, b)) % 10007;
    return mem[a][b];
}

int main(void) {
    fastio;

    int n, k;   cin >> n >> k;

    mem[0][0] = 1;
    for(int i = 1; i <= n; i++) {
        mem[i][0] = 1;
        mem[i][i] = 1;
    }

    cout << solve(n, k);

    return 0;
}