#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

void solve(int* arr, int n) {

}

int main(void) {
    fastio;

    int n;  cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    solve(arr, n);

    return 0;
}