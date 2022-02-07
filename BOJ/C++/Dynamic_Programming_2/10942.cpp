#include <iostream>

using namespace std;

int num[2000], dp[2000][2000];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;  cin >> n;

    for(int i = 0; i < n; i++)  cin >> num[i];

    int m;  cin >> m;

    while(m--) {
        int s, e;
        cin >> s >> e;

        cout << dp[s][e] << '\n';
    }

    return 0;
}