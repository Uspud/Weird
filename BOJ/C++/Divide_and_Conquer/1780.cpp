#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int arr[2188][2188];

int minus_cnt, zero_cnt, one_cnt;

void solve(int x, int y, int n) {
    int tmp_minus = 0, tmp_zero = 0, tmp_one = 0;

    for(int i = x; i < x + n; i++) {
        for(int j = y; j < y + n; j++) {
            if(arr[i][j] == -1) tmp_minus++;
            else if(arr[i][j] == 0) tmp_zero++;
            else    tmp_one++;
        }
    }
    
    if(tmp_minus == n * n) minus_cnt++;
    else if(tmp_one == n * n)   one_cnt++;
    else if(tmp_zero == n * n)  zero_cnt++;
    else {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                solve(x + n / 3 * i, y + n / 3 * j, n / 3);
            }
        }
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


    cout << minus_cnt << '\n' << zero_cnt << '\n' << one_cnt ;

    return 0;
}