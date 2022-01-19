#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[500][500];

int main(void) {
    fastio;
    
    int n;  cin >> n;

    int triangle[n][n];


    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }
    
    mem[0][0] = triangle[0][0];

    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0) {
                mem[i][j] = triangle[i][j] + mem[i-1][j];
            }
            else {
                if(mem[i-1][j-1] <= mem[i-1][j]) {
                    mem[i][j] = triangle[i][j] + mem[i-1][j];
                }
                else if(mem[i-1][j-1] > mem[i-1][j]) {
                    mem[i][j] = triangle[i][j] + mem[i-1][j-1];
                }
            }
        }
    }

    int max = 0;

    for(int i = 0; i < n; i++) {
        if(max < mem[n-1][i]) {
            max = mem[n-1][i];
        }
    }

    cout << max;

    return 0;
}