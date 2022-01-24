#include <iostream>
#include <algorithm>
#include <cmath>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int euclidean(int a, int b) {
    int r = a % b;
    if(r == 0)  return b;
    return euclidean(b, r);
}

bool compare(int a, int b) {
    return a < b;
}

int main(void) {
    fastio;

    int n;  cin >> n;   int m[n], min = 1000000000;

    for(int i = 0; i < n; i++) {
        cin >> m[i];
        min = min > m[i] ? m[i] : min;
    }

    sort(m, m+n, compare);

    int gcd = m[1] - m[0];

    for(int i = 2; i < n; i++) {
        gcd = euclidean(gcd, m[i] - m[i-1]);
    }

    for(int i = 2; i * i <= gcd; i++)   if(gcd % i == 0)  cout << i << " ";
    for(int i = sqrt(gcd-1); i >= 1; i--)   if(gcd % i == 0)    cout << gcd / i << " ";
    
    return 0;
}