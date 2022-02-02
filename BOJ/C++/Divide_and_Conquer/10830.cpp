#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
using ll = long long;

ll remain[5][5];
int n;

void multi(ll x[5][5], ll y[5][5]) {
    ll temp[5][5];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp[i][j] = 0;
            for(int k = 0; k < n; k++)  temp[i][j] += x[i][k] * y[k][j];
            temp[i][j] %= 1000;
        }
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            x[i][j] = temp[i][j];
}

int main(void) {
    fastio;

    ll b;   cin >> n >> b;
    ll mat[5][5];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
        remain[i][i] = 1;
    }

    while(true) {
        if(b == 1) {
            multi(mat, remain);
            break;
        }
        if(b % 2)   multi(remain, mat);
        multi(mat, mat);
        b /= 2;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}