#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[1000];

bool compare(int a, int b) {
    return a < b;
}

int main(void) {
    fastio;

    int n;  cin >> n;   int time[n];

    for(int i = 0; i < n; i++)  cin >> time[i];

    sort(time, time+n, compare);

    mem[0] = time[0];
    int total = mem[0];

    for(int i = 1; i < n; i++) {
        mem[i] = mem[i-1] + time[i];
        total += mem[i];
    }

    cout << total;

    return 0;
}