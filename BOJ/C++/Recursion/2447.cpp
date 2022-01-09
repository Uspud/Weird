#include <iostream>
#include <cmath>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

int main(void){
    fastio;

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        int now = 1;
        if(i>=2) {
            now = ceil(log(i) / log(3));
        } 
        for(int j = 1; j <= n; j++) {
            if(int(i / now) == 2 && int (j / now) == 2) {
                cout << " ";
                continue;
            }
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}