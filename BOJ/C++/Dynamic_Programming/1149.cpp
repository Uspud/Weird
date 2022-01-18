#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int cost[1000][3];
int mem[1000];

int n, lastidx = -1;

int dp(int k){
    if(mem[k] != 0) {
        return mem[k];
    }

    int minv = 1001, minidx, maxv = 0, maxidx, mididx;
    for(int i = 0; i < 3; i++) {
        if(cost[k][i] > maxv) {
            maxv = cost[n][i];
            maxidx = i;
        }
        if(cost[k][i] < minv) {
            minv = cost[n][i];
            minidx = i;
        }
    }
    for(int i = 0; i < 3; i++) {
        if(cost[k][i] < maxv && cost[n][i] > minv) {
            mididx = i;
        }
    }

    if(minidx != lastidx) {
        mem[k] = dp(k-1) + cost[k][minidx]; 
        minidx = lastidx;
    }
    else {
        mem[k] = dp(k-1) + cost[k][mididx];
        mididx = lastidx;
    }
}

int main(void) {
    fastio;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    cout << dp(n);

    return 0;
}