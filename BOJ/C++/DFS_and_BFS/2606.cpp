#include <iostream>
#include <vector>

using namespace std;

int n, m, ans;   bool visit[101];
vector<int> mat[101];

void dfs(int v) {
    visit[v] = true;

    int size = mat[v].size();

    for(int i = 0; i < size; i++) {
        int tmp = mat[v][i];
        
        if(!visit[tmp]) {
            dfs(tmp);
            ans++;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int x, y;

        cin >> x >> y;
    
        mat[x].push_back(y);
        mat[y].push_back(x);
    }

    dfs(1);

    cout << ans;

    return 0;
}