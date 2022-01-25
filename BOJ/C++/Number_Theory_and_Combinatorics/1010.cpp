#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[31][31];

int solve(int a, int b) {
    if(a <= 1)  return 1;
    if(mem[a][b] != 0)  return mem[a][b];

    mem[a][b] = (solve(a-1, b-1) + solve(a-1, b));
    return mem[a][b];
}

int main(void) {
    fastio;

    int t;  cin >> t;

    mem[0][0] = 1;
    for(int i = 1; i <= 31; i++) {
        mem[i][0] = 1;
        mem[i][i] = 1;
    }

    while(t) {
        int n, m;   cin >> n >> m;
        
        cout << solve(m, n) << "\n";

        t--;
    }

    return 0;
}