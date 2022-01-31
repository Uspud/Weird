#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int map[65][65];

void solve(int x, int y, int n) {
    int tmp = 0;

    for(int i = x; i < x + n; i++) {
        for(int j = y; j < y + n; j++) {
            if(map[i][j])   tmp++;
        }
    }

    if(!tmp)    cout << "0";
    else if(tmp == n*n) cout << "1";
    else {
        cout << "(";
        solve(x, y, n / 2);
        solve(x, y + n / 2, n / 2);
        solve(x + n / 2, y, n / 2);
        solve(x + n / 2, y + n / 2, n / 2);
        cout << ")";
    }
}

int main(void) {
    fastio;

    int n;  cin >> n;

    for(int i = 0; i < n; i++) {
        string s;   cin >> s;
        for(int j = 0; j < n; j++) {
            map[i][j] = s[j] - '0';
        }
    }

    solve(0, 0, n);

    return 0;
}