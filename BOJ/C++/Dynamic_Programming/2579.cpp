#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int main(void) {    // 이전에 1칸만 움직였으면 그 뒤에 무조건 2칸 가야함...
    fastio;

    int n; cin >> n; int stair[n];

    for(int i = 0; i < n; i++)  cin >> stair[i];

    int mem[n], mov = 0;

    mem[0] = stair[0];

    if(n == 2) {
        cout << stair[0] + stair[1];
        return 0;
    }
    
    if(stair[0] > stair[1]) {
        mov = 1;
        mem[1] = stair[1];
    }

    for(int i = mov; i < n ; i++) {
        if(mov == 1 || i == n-3) {
            mov = 2;
            mem[i + mov] = mem[i] + stair[i + mov];
            i++;
        }
        else {
            if(stair[i + 2] > stair[i + 1]) {
                mov = 2;
                mem[i + mov] = mem[i] + stair[i + mov];
                i++;
            }
            else {
                mov = 1;
                mem[i + mov] = mem[i] + stair[i + mov];
                i;
            }
        }
    }

    cout << mem[n-1];

    return 0;
}