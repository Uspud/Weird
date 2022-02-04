#include <iostream>
#include <algorithm>

using namespace std;

int card[500000], n;

int lower_bound(int key) {
    int start = 0, end = n - 1;

    while(start < end) {
        int mid = (start + end) / 2;
        
        if(key <= card[mid]) end = mid;
        else start = mid + 1;
    }

    return start;
}

int upper_bound(int key) {
    int start = 0, end = n - 1;

    while(start < end) {
        int mid = (start + end) / 2;

        if(key < card[mid]) end = mid;
        else start = mid + 1;
    }

    return start;
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++)  cin >> card[i];
    sort(card, card+n);

    int m;  cin >> m;

    int result[m];
    for(int i = 0; i < m; i++) {
        int a;  cin >> a;
        int up = upper_bound(a);
        int low = lower_bound(a);

        if(up == n - 1 && card[n - 1] == a)   up++;

        cout << up - low << " ";
    }

    return 0;
}