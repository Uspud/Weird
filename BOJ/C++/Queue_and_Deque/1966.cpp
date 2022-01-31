#include <iostream>
#include <queue>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    int t;  cin >> t;

    for(int i = 0; i < t; i++) {
        int n, doc;  cin >> n >> doc;
        int cnt = 0;

        queue<pair<int, int>> q;
        priority_queue <int> pq;

        for(int j = 0; j < n; j++) {
            int a;
            cin >> a;
            q.push({j, a});
            pq.push(a);
        }

        while(!q.empty()) {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();

            if(pq.top() == val) {
                pq.pop();
                cnt++;
                if(idx == doc) {
                    cout << cnt << "\n";
                    break;
                }
            }
            else    q.push({idx, val});
        }
    }

    return 0;
}