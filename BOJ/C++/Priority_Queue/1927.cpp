#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> pq;

    int n;  cin >> n;

    while(n--) {
        int tmp;    cin >> tmp;

        if(tmp == 0) {
            if(pq.empty())  cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(tmp);
        }
    }

    return 0;
}