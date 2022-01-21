#include <iostream>

using namespace std;

using ll = long long;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

ll mem[101][10], result;

int main(void) {
    fastio;

    ll divide = 1000000000;
    int n; cin >> n;

    for(int i = 1; i < 10; i++) {
        mem[1][i] = 1;
    }

    for(int i = 2; i <= n; i++) {
        mem[i][0] = mem[i-1][1] % divide;
        mem[i][9] = mem[i-1][8] % divide;
        for(int j = 1; j < 9; j++) {
            mem[i][j] = (mem[i-1][j-1] + mem[i-1][j+1]) % divide;
        }
    }

    for(int i = 0; i < 10; i++) result += mem[n][i];

    cout << result % divide;

    return 0;
}