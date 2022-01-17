#include <iostream>
#include <vector>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

const int MAX = 20;

int n, s[MAX][MAX], min_diff = 1000000000;

bool visited[MAX];

void dfs(int x, int y) {
    if(y == n / 2) {
        int stat_start = 0, stat_link = 0;
        vector<int> team_start, team_link;

        for(int i = 0; i < n; i++) {
            if(visited[i])  team_start.push_back(i);
            else    team_link.push_back(i);
        }

        for(int i = 0; i < n/2; i++) {
            for(int j = i+1; j < n/2; j++) {
                stat_start += s[team_start[i]][team_start[j]] + s[team_start[j]][team_start[i]];
                stat_link += s[team_link[i]][team_link[j]] + s[team_link[j]][team_link[i]];
            }
        }

        if(min_diff > abs(stat_start - stat_link))   min_diff = abs(stat_start - stat_link);
    } 
    else {
        for(int i = x; i < n; i++) {
            if(!visited[i]) {
                visited[i] = true;
                dfs(i, y + 1);
                visited[i] = false;
            }
        }
    }
}

int main(void) {
    fastio;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)  cin >> s[i][j];
    }

    dfs(0, 0);

    cout << min_diff;

    return 0;
}