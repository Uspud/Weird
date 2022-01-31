#include <iostream>
#include <queue>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    int n;  cin >> n;
    queue<int> q;

    if(n == 1) {
        cout << 1;
        return 0;
    }

    for(int i = 1; i <= n; ++i) q.push(i);

    while(true) {
        q.pop();

        if(q.size() == 1) {
            cout << q.front();
            return 0;
        }

        q.push(q.front());
        q.pop();
    }
}