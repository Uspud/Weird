#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    int x, y;   cin >> x >> y;
    int maxv = max(x,y);
    for(int i = maxv; ; i--) {
        if(x % i == 0 && y % i == 0) {
            cout << i << "\n";
            break;
        }
    }
    for(int i = maxv; ; i++) {
        if(i % x == 0 && i % y == 0) {
            cout << i;
            return 0;
        }
    }
}