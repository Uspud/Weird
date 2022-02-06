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

    int init;   cin >> init;
    max_q.push(init);   n--;
    cout << init << '\n';

    while(n--) {
        int tmp;    cin >> tmp;

        if(max_q.size() - 1 == min_q.size())  min_q.push(tmp);
        else    max_q.push(tmp);

        if(max_q.top() > min_q.top()) {
            int maximum = max_q.top(), minimum = min_q.top();
            max_q.pop();    min_q.pop();
            max_q.push(minimum);    min_q.push(maximum);
        }

        cout << max_q.top() << '\n';
    }

    return 0;
}