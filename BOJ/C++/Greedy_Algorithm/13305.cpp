#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

using ll = long long;

int main(void) {
    fastio;

    int n;  cin >> n; ll length[n-1], city[n];

    for(int i = 0; i < n-1; i++)    cin >> length[i];
    for(int i = 0; i < n; i++)      cin >> city[i];

    ll cost = 0;
    ll min = 1000000000;
    for(int i = 0; i < n-1; i++) {
        if(city[i] < min)   min = city[i];
        
        cost += min * length[i];
    }

    cout << cost;

    return 0;
}