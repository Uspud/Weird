#include <iostream>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int cost[1000][3];
int mem[1000][3];

int n;

int main(void) {
    fastio;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    mem[0][0] = cost[0][0];
    mem[0][1] = cost[0][1];
    mem[0][2] = cost[0][2];

    for(int i = 0; i < n ; i++) {
        mem[i][0] = min({mem[i-1][1],mem[i-1][2]}) + cost[i][0];
        mem[i][1] = min({mem[i-1][0],mem[i-1][2]}) + cost[i][1];
        mem[i][2] = min({mem[i-1][0],mem[i-1][1]}) + cost[i][2];
    }

    cout << min({mem[n-1][0], mem[n-1][1], mem[n-1][2]});

    return 0;
}