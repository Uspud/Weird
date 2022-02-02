#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int* arr, int target, int left, int right) {
    if(left > right)    return 0;

    int mid = (left + right) / 2;
    if(target == arr[mid])   return 1;
    else if(target < arr[mid]) return binary_search(arr, target, left, mid - 1);
    else    return binary_search(arr, target, mid + 1, right);
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;  cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)  cin >> arr[i];

    sort(arr, arr+n);
    int m;  cin >> m;

    for(int i = 0; i < m; i++) {
        int target;
        cin >> target;
        cout << binary_search(arr, target, 0, n-1) << "\n";
    }

    return 0;
}