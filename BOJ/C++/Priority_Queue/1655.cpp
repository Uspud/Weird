#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;  cin >> n;

    priority_queue<int, vector<int>, greater<int>> min_q;
    priority_queue<int> max_q;

    max_q.push(1);

    while(n--) {
        int tmp;    cin >> tmp;

        if(max_q.size() - 1 == min_q.size())
    }
}