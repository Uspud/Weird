#include <iostream>
#include <map>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;
    int t;  cin >> t;

    while(t--) {
        int n;  cin >> n;

        string name, kind;
        map<string, int> cloth;

        for(int i = 0; i < n; i++) {
            cin >> name >> kind;

            if(cloth.find(kind) == cloth.end()) cloth.insert({kind, 1});
            else    cloth[kind]++;
        } 

        int result = 1;
        for(auto i : cloth) {
            result *= i.second + 1;
        }
        cout << result - 1 << "\n";
    }

    return 0;
}