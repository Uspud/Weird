#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int euclidean(int a, int b) {
    int r = a % b;
    if(r == 0)  return b;
    return euclidean(b, r);
}

int main(void) {
    fastio;

    int t;  cin >> t;

    for(int i = 0; i < t; i++) {
        int a, b;   cin >> a >> b;
        int max = a > b ? a : b;
        int min = a < b ? a : b;
        cout << a * b / euclidean(max, min) << "\n";
    }

    return 0;
}