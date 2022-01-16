#include <iostream>
#include <cmath>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

const int MAX = 15;

int n, count = 0;

int board[MAX];

void solve(int order) {
    int flag;

    if(order == n) {
        count++;
        return;
    }
    for(int trial = 0; trial < n; trial++) {
        flag = 1;
        for(int test = 0; test < order; test++) {
            if(trial == board[test] || abs(trial - board[test]) == abs(order - test)){
                flag = 0;
                break;
            }
        }
        if(flag) {
            board[order] = trial;
            solve(order + 1);
        }
    }
}

int main(void) {
    fastio;

    cin >> n;

    solve(0);

    cout << count;

    return 0;
}