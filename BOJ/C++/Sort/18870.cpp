#include <iostream>
#include <vector>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main(void) {
    fastio;
    
    int n; cin >> n;

    vector<int> location(n);

    for(int i = 0; i < n; i++) {
        cin >> location[i];
    }

    vector<int> copy_location(location);

    sort(copy_location.begin(), copy_location.end(), compare);

    copy_location.erase(unique(copy_location.begin(), copy_location.end()), copy_location.end());

    for(int i = 0; i < n; i++) {
        int rst = lower_bound(copy_location.begin(), copy_location.end(), location[i]) - copy_location.begin();

        cout << rst << " ";
    }
    return 0;
}