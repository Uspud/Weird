#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ans = {1000000};

int search(int start, int end, int key) {
    if(start >= end)    return start;

    int mid = (start + end) / 2;

    if(ans[mid] < key)  return search(mid + 1, end, key);
    else    return search(start, mid, key);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;  cin >> n;

    for(int i = 0; i < n; i++) {
        int tmp;    cin >> tmp;
        if(ans.back() < tmp)    ans.push_back(tmp);
        else {
            int idx = search(0, ans.size(), tmp);
            ans[idx] = tmp;
        }
    }

    cout << ans.size();

    return 0;
}