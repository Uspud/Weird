#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    int x, y;

    while(true) {
        cin >> x >> y;

        if(!x && !y)    return 0;

        if(y % x == 0 && y / x > 0) cout << "factor\n";
        else if(x % y == 0 && x / y > 0) cout << "multiple\n";
        else                        cout << "neither\n";
    }
}