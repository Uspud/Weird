#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
using ll = long long;

int hist[100000];

ll get_mid_area(int start, int end, int mid) {
    int left_idx = mid, right_idx = mid;

    ll height = hist[mid], max_area = height;

    while(start < left_idx && end > right_idx) {

        if(hist[left_idx - 1] > hist[right_idx + 1]) {
            left_idx--;
            height = min(height, ll(hist[left_idx]));
        }
        else {
            right_idx++;
            height = min(height, ll(hist[right_idx]));
        }

        max_area = max(max_area, height * (right_idx - left_idx + 1));
    }

    while(left_idx > start) {
        left_idx--;
        height = min(height, ll(hist[left_idx]));
        max_area = max(max_area, height * (right_idx - left_idx + 1));
    }

    while(right_idx < end) {
        right_idx++;
        height = min(height, ll(hist[right_idx]));
        max_area = max(max_area, height * (right_idx - left_idx + 1));
    }

    return max_area;
}

ll get_area(int start, int end) {

    if(start == end) return hist[start];

    int mid = (start + end) / 2;

    ll left = get_area(start, mid);
    ll right = get_area(mid + 1, end);

    ll max_area = max(left, right);
    max_area = max(max_area, get_mid_area(start, end, mid));

    return max_area;
}

int main(void) {
    fastio;

    int n;  cin >> n;
    if(!n)  return 0;

    for(int i = 0; i < n; i++) {
        cin >> hist[i];
    }
        
    cout << get_area(0, n-1) << "\n";

    return 0;
}