#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int arr[129][129], w_cnt = 0, b_cnt = 0;

void solve(int x, int y, int n) {
    int temp = 0;
    
    for(int i = x; i < x + n; i++) {
        for(int j = y; j < y + n; j++) {
            if(arr[i][j])   temp++;
        }
    }

    if(!temp)   w_cnt++;
    else if(temp == n*n)    b_cnt++;
    else {
        solve(x, y, n / 2);
        solve(x + n / 2, y, n / 2);
        solve(x, y + n / 2, n / 2);
        solve(x + n / 2, y + n / 2, n / 2);
    }
}

int main(void) {
    fastio;

    int n;  cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    solve(0, 0, n);

    cout << w_cnt << "\n" << b_cnt;

    return 0;
}