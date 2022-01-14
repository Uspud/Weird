#include <iostream>
#include <algorithm>
#include <cmath>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main(void) {
    fastio;

    int n; cin >> n;

    int arr[n], sum = 0;

    int count[8001];
    for(int i = 0; i < 8001; i++) count[i] ^= count[i];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        sum += arr[i];

        count[arr[i] + 4000]++;
    }
    
    sort(&arr[0], &arr[n], compare);

    int max_count, flag = 0, mode;

    for(int i = 0; i < 8001; i++) {
        if(count[i] > max_count) {
            max_count = count[i];
            mode = i;
            flag = 1;
            //cout << max_count << "\n";
        }
        else if(count[i] == max_count && flag) {
            max_count = count[i];
            mode = i;
            flag ^= flag;
        }
    }

    //cout << count[4001] << "\n";

    //for(int i = 0 ; i < n ;i++) cout << arr[i] << " ";
    cout << fixed;
    cout.precision(0);
    cout << round(float(sum) / float(n)) << "\n";
    cout << arr[n/2] << "\n" << mode - 4000 << "\n" << arr[n-1] - arr[0];

    return 0;
}