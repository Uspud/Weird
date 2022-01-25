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

    int n;  cin >> n;   int circle[n];

    for(int i = 0; i < n; i++)  cin >> circle[i];

    for(int i = 1; i < n; i++)  cout << circle[0] / euclidean(circle[0], circle[i]) << "/" << circle[i] / euclidean(circle[0], circle[i]) << "\n";

    return 0;
}