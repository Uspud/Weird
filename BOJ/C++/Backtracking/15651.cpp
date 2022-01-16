#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 

using namespace std;

int n, m;

const int MAX = 8;

// bool visited[MAX];

int arr[MAX];

void dfs(int k) {
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else {
        for(int i = 1; i <= n; i++) {
            arr[k] = i;
            dfs(k + 1);
        }
    }
}

int main(void) {
    fastio;

    cin >> n >> m;

    dfs(0);

    return 0;
}