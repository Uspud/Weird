#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int n, k;

int search(int start, int end) {
    if(start >= end) return start;

    ll mid = (start + end) / 2;
    ll cnt = 0;

    for(int i = 1; i <= n; i++) cnt += min(mid / i, ll(n));

    if(k > cnt)    return search(mid + 1, end);
    else    return search(start, mid);
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    cout << search(1, k);

    return 0;
}