#include <iostream>
#include <queue>

using namespace std;

int abs(int a) {
    return a > -a ? a : -a;
}

struct cmp {
    bool operator()(int a, int b) {
        if(abs(a) == abs(b))    return a > b;
        return abs(a) > abs(b);
    }
};

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, cmp> pq;

    int n;  cin >> n;

    while(n--) {
        int tmp;    cin >> tmp;

        if(!tmp) {
            if(pq.empty())    cout << "0\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else pq.push(tmp);
    }
}