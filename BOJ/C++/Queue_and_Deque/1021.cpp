#include <iostream>
#include <vector>
#include <deque>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int main(void) {
    fastio;

    int n, m;   cin >> n >> m;

    deque<int> dq, dq_copy, dq_copy_first, dq_copy_second;

    vector<int> target;
    for(int i = 0; i < m; i++) {
        int a;  cin >> a;
        target.push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        dq.push_front(i);
    }
    dq_copy = dq;

    int result = 0, idx = 0;;
    while(idx != m) {
        int size = dq.size();

        int trial_first = 0, trial_second = 0;
        for(int i = 0; i < size; i++) {
            if(dq.front() == target[idx]) {
                dq.pop_front();
                trial_first++;
                break;
            }
            else {
                dq.push_back(dq.front());
                dq.pop_front();
                trial_first++;
            }
        }
        dq_copy_first = dq;
        dq = dq_copy;
        for(int i = 0; i < size; i++) {
            if(dq.back() == target[idx]) {
                dq.pop_back();
                break;
            }
            else {
                dq.push_front(dq.back());
                dq.pop_back();
                trial_second++;
            }
        }
        dq_copy_second = dq;
        
        dq_copy = trial_first < trial_second ? dq_copy_first : dq_copy_second;
        dq = dq_copy;
        result += min(trial_first, trial_second);
        idx++;
    }

    cout << result;
    return 0;
}