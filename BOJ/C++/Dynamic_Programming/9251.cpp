#include <iostream>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

string a, b;
int mem[1001][1001], i, j;

int main(void) {
    fastio;

    cin >> a >> b;

    int a_length = a.size(), b_length = b.size();

    for(i = 1; i <= a_length; i++) {
        for(j = 1; j <= b_length; j++) {
            mem[i][j] = max({mem[i][j-1], mem[i-1][j], mem[i-1][j-1] + (a[i-1] == b[j-1])});
        }
    }

    cout << mem[i-1][j-1];

    return 0;
}