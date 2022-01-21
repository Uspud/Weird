#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[10001];

int main(void) {
    fastio;

    int n; cin >> n;

    int podo[n];

    for(int i = 1; i <= n; i++)  cin >> podo[i];

    mem[1] = podo[1];
    mem[2] = podo[1] + podo[2];
    mem[3] = max({podo[1] + podo[3], podo[2] + podo[3], mem[2]});

    for(int i = 4; i <= n; i++) {
        mem[i] = max({mem[i-2] + podo[i], mem[i-3] + podo[i-1] + podo[i], mem[i-1]});
    }

    cout << mem[n];

    return 0;
}