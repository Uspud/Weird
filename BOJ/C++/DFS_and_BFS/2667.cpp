#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string arr[25];

int n, cnt;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

bool visited[25][25];

vector<int> ans;

void dfs(int x, int y) {
    cnt++;
    visited[x][y] = true;

    for(int i = 0; i < 4; i++) {
        int newx = x + dx[i], newy = y + dy[i];
        
        if(0 <= newx && newx < n && 0 <= newy && newy < n && !visited[newx][newy] && arr[newx][newy] == '1')
            dfs(newx, newy);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for(int i = 0; i < n; i++)  cin >> arr[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(arr[i][j] == '1' && !visited[i][j]) {
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt);
            }

    int size = ans.size();

    sort(ans.begin(), ans.end());

    cout << size << '\n';
    
    for(int i = 0; i < size; i++)   cout << ans[i] << '\n';

    return 0;
}