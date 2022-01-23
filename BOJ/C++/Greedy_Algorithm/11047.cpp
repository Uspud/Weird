#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기   

using namespace std;

int main(void) {
    fastio;

    int n, k;  cin >> n >> k;

    int coin[n+1];

    for(int i = 1; i <= n; i++) cin >> coin[i];
    

    int total = 0;
    for(int i = n; i >= 1; i--) {
        total += k / coin[i];
        k %= coin[i];
    }

    cout << total;

    return 0;
}