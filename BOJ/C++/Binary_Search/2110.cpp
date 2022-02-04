#include <iostream>
#include <algorithm>

using namespace std;

int n, c, home[200000], router[200000];

int solve(int start, int end) {
    if(start >= end) return start - 1;

    int mid = (start + end) / 2;

    int flag = 0, cnt = 1;
    for(int i = 1; i < n; i++) {
        if(home[i] - home[flag] >= mid) {
            flag = i;
            cnt++;
        }
    }

    if(cnt < c) return solve(start, mid);
    return solve(mid + 1, end);
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> c;

    for(int i = 0; i < n; i++)  cin >> home[i];

    sort(home, home + n);

    cout << solve(1, home[n-1] - home[0] + 1);
    
    return 0;
}