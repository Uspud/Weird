#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

const int MAX = 100;

int n, result, maxv = -1000000000, minv = 1000000000;

int a[MAX], symbol[4];

void dfs(int k){
    if(k == n) {
        if(result > maxv)   maxv = result;
        if(result < minv)  minv = result;
    }
    else {
        int temp = result;
        if(symbol[0] > 0) {
            symbol[0]--;
            result += a[k];
            dfs(k + 1);
            result = temp;
            symbol[0]++;
        }
        if(symbol[1] > 0) {
            symbol[1]--;
            result -= a[k];
            dfs(k + 1);
            result = temp;
            symbol[1]++;
        }
        if(symbol[2] > 0) {
            symbol[2]--;
            result *= a[k];
            dfs(k + 1);
            result = temp;
            symbol[2]++;
        }
        if(symbol[3] > 0) {
            symbol[3]--;
            result /= a[k];
            dfs(k + 1);
            result = temp;
            symbol[3]++;
        }
    }
}

int main(void) {
    fastio;

    cin >> n;

    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < 4; i++)  cin >> symbol[i];

    result = a[0];

    dfs(1);

    cout << maxv << "\n" << minv;

    return 0;
}