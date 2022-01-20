#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[1000001];

int main(void) {
    fastio;

    int a;

    cin >> a;

    mem[1] = 0;

    for(int i = 2; i <= a; i++) {
        if(i % 6 == 0) mem[i] = min({mem[i/3]+1, mem[i/2]+1, mem[i-1] + 1});
        else if(i % 3 == 0) mem[i] = min(mem[i/3] + 1, mem[i-1] + 1);
        else if(i % 2 == 0) mem[i] = min(mem[i/2] + 1, mem[i-1] + 1);
        else    mem[i] = mem[i-1] + 1;
    }

    cout << mem[a];

    return 0;
}