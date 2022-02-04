#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int n, m;

int search(int* wood, ll start, ll end) {
    if(start >= end) return start - 1;

    int mid = (start + end) / 2;

    ll sum = 0;

    for(int i = 0; i < n; i++)  sum += (wood[i] - mid) > 0 ? wood[i] - mid : 0;

    if(sum < ll(m)) return search(wood, start, mid);
    else    return search(wood, mid + 1, end);
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;   // m is key

    int wood[n], max = 0;
    for(int i = 0; i < n; i++) {
        cin >> wood[i];
        if(max < wood[i])   max = wood[i];
    }
    

    cout << search(wood, 0, max);

    return 0;
}