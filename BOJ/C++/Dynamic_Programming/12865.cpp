#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[101][100001];

int main(void) {
    fastio;

    int n, k;   cin >> n >> k;
    int w[n+1], v[n+1];

    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(j >= w[i])   mem[i][j] = max(mem[i-1][j], mem[i-1][j-w[i]] + v[i]);
            else    mem[i][j] = mem[i-1][j];
        }
    }

    cout << mem[n][k];

    return 0;
}