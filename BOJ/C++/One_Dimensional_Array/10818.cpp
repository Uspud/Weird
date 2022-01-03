#include <iostream>

using namespace std;
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;

    cin >> n;

    int a[n], max = -100000000, min = 100000000;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << min << " " << max;

    return 0;
}