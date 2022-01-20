#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int main(void) {    // 이전에 1칸만 움직였으면 그 뒤에 무조건 2칸 가야함...
    fastio;

    int n; cin >> n; int stair[n];

    for(int i = 0; i < n; i++)  cin >> stair[i];

    int mem[n], mov;

    mem[0] = stair[0];
    mem[1] = stair[0] + stair[1];
    mem[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

    for(int i = 3; i < n; i++) {
        mem[i] = max(mem[i-2] + stair[i], mem[i-3] + stair[i-1] + stair[i]);
    }

    cout << mem[n-1];

    return 0;
}