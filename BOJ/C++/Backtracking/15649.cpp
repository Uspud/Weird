#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

int n, m;

const int MAX = 9;

int arr[MAX];

bool visited[MAX];


void dfs(int k) {
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else {
        for(int i = 1; i<=n; i++) {
            if(!visited[i]) {
                visited[i] = true;
                arr[k] = i;
                dfs(k + 1);
                visited[i] = false;
            }
        }
    }
}

int main(void) {
    fastio;

    cin >> n >> m;

    dfs(0);

    return 0;
}