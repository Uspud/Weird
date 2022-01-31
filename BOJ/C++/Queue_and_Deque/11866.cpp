#include <iostream>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;
    int n, k;   cin >> n >> k;

    vector<int> v;
    for(int i = 1; i <= n; i++) v.push_back(i);

    cout << "<";
    int i = 0;
    
    while(v.size()) {
        if(v.size() == 1) {
            cout << v[0] << ">";
            return 0;
        }
        for(int j = 0; j < k; j++) {
            if(i >= v.size() && i >= 0)  i = 0;
            i++;
            if(j == k-1) {
                cout << v[i-1] << ", ";
                v.erase(v.begin() + i-1);
                i--;
            }
        }
    }
}